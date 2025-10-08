
  int64_t alacritty::renderer::text::TextRenderApi::add_render_item::hbff4cf76ce075603(int64_t* arg1, int32_t* arg2, int32_t* arg3, float arg4, float arg5)

{
    int64_t rax;
    int64_t var_28 = rax;
    *var_28[4] = arg5;
    var_28 = arg4;
    int64_t* r14 = arg1[1];
    
    if (!_$LT$alacritty..renderer..text..gles2..Batch$u20$as$u20$alacritty..renderer..text..TextRenderBatch$GT$::is_empty::h4c50a91fc77a81af(r14[2]) && r14[3] != *arg3)
        _$LT$alacritty..renderer..text..gles2..RenderApi$u20$as$u20$alacritty..renderer..text..TextRenderApi$LT$alacritty..renderer..text..gles2..Batch$GT$$GT$::render_batch::h45ff3cec58968cac(arg1);
    
    _$LT$alacritty..renderer..text..gles2..Batch$u20$as$u20$alacritty..renderer..text..TextRenderBatch$GT$::add_item::h837d0f136cc1557e(r14, arg2, arg3, var_28, *var_28[4]);
    char result = _$LT$alacritty..renderer..text..gles2..Batch$u20$as$u20$alacritty..renderer..text..TextRenderBatch$GT$::full::hee26601b208ac73d(r14[2]);
    
    if (!result)
        return result;
    
    /* tailcall */
    return _$LT$alacritty..renderer..text..gles2..RenderApi$u20$as$u20$alacritty..renderer..text..TextRenderApi$LT$alacritty..renderer..text..gles2..Batch$GT$$GT$::render_batch::h45ff3cec58968cac(arg1);
}
