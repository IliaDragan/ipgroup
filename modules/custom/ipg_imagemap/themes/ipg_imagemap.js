Drupal.behaviors.imageImagemapEdit = {
  attach: function(context, settings) {

    function deleteEmptyItems($imagemapDataDiv) {
      $imagemapDataDiv.find('.image-imagemap-data-item').each(function() {
        var $this = jQuery(this);
        var points = $this.find('input.img-imagemap-points').val();
        var title = $this.find('input.img-imagemap-title').val();
        if (points == '' || title == '') {
          $this.remove();
        }
        else {
          var boxTitle = $this.find('.img-imagemap-data-title');
          if (boxTitle.html() == '') {
            boxTitle.html(title);
          }
        }
      });
    }

    function collectDataItems($editContainer, $imagemapDataDiv, $imagemapImg) {
      // Collect data from all items.
      var $coordInput = $editContainer.find('.image-imagemap-coordinates input');
      var $imagemapItems = $imagemapDataDiv.find('.image-imagemap-data-item');
      var imagemapData = new Array();

      $imagemapItems.each(function() {
        var $this = jQuery(this);
        var points = $this.find('input.img-imagemap-points').val();
        if (points) {
          imagemapData.push({
            'title': $this.find('.img-imagemap-title').val().replace(/"/g, '\''),
            'description': $this.find('.img-imagemap-descr').val().replace(/"/g, '\''),
            'coordinates': points
          });
        }
      });
      if (imagemapData.length > 0) {
        $coordInput.val(jQuery.toJSON(imagemapData));
      }
      else {
        $coordInput.val('');
      }
    }

    jQuery('.image-imagemap-edit:not(.with-jcrop)', context).each(function() {
      // Main data.
      var $editContainer = jQuery(this);
      var $imagemapImg = $editContainer.find('.image-imagemap-img img');
      var $imagemapInputs = $editContainer.find('.image-imagemap-inputs');
      var $imagemapSaveBtn = $editContainer.find('.image-imagemap-save');
      var $imagemapAddBtn = $editContainer.find('.image-imagemap-add');
      var $imagemapDataDiv = $editContainer.find('.image-imagemap-data');
      var $existImagemaps = $imagemapDataDiv.find('.image-imagemap-data-item');

      $editContainer.addClass('with-jcrop');

      // Imagemaps form.
      if ($existImagemaps.length > 0) {
        $imagemapDataDiv.find('.img-imagemap-data-wrapper').hide();
      }
      else {
        $imagemapDataDiv.html($imagemapInputs.html());
      }

      $imagemapDataDiv.append($imagemapAddBtn.html());
      $imagemapDataDiv.append($imagemapSaveBtn.html());

      // Add another imagemap.
      $editContainer.find('.img-imagemap-add').click(function() {
        deleteEmptyItems($imagemapDataDiv);
        $imagemapDataDiv.find('.img-imagemap-data-wrapper').hide();
        jQuery(this).before($imagemapInputs.html());
        return false;
      });

      // Save imagemaps coordinates.
      $editContainer.find('.img-imagemap-save').click(function() {
        deleteEmptyItems($imagemapDataDiv);
        collectDataItems($editContainer, $imagemapDataDiv, $imagemapImg);
        return false;
      }).trigger('click');

      // Select imagemap.
      $imagemapDataDiv.delegate('.img-imagemap-data-title', 'click', function() {
        var $this = jQuery(this);
        var $item = $this.parent();
        deleteEmptyItems($imagemapDataDiv);
        $imagemapDataDiv.find('.img-imagemap-data-wrapper').hide();
        $this.next().show();
        return false;
      });

      // Remove imagemap.
      $imagemapDataDiv.delegate('.img-imagemap-remove', 'click', function() {
        jQuery(this).parent().parent().remove();
        collectDataItems($editContainer, $imagemapDataDiv, $imagemapImg);
        return false;
      });
    });
  }
}
