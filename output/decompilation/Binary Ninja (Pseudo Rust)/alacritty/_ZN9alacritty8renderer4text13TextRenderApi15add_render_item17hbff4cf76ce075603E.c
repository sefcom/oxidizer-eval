
  fn alacritty::renderer::text::TextRenderApi::add_render_item::hbff4cf76ce075603(arg1: *mut i64, arg2: *mut i32, arg3: *mut i32, arg4: f32, arg5: f32) -> i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    *var_28[4] = arg5;
    var_28 = arg4;
    let r14: *mut i64 = arg1[1];
    
    if _$LT$alacritty..renderer..text..gles2..Batch$u20$as$u20$alacritty..renderer..text..TextRenderBatch$GT$::is_empty::h4c50a91fc77a81af(r14[2]) == 0 && r14[3] != *arg3
    {
        _$LT$alacritty..renderer..text..gles2..RenderApi$u20$as$u20$alacritty..renderer..text..TextRenderApi$LT$alacritty..renderer..text..gles2..Batch$GT$$GT$::render_batch::h45ff3cec58968cac(arg1);
    }
    
    _$LT$alacritty..renderer..text..gles2..Batch$u20$as$u20$alacritty..renderer..text..TextRenderBatch$GT$::add_item::h837d0f136cc1557e(r14, arg2, arg3, var_28, *var_28[4]);
    let result: i8 = _$LT$alacritty..renderer..text..gles2..Batch$u20$as$u20$alacritty..renderer..text..TextRenderBatch$GT$::full::hee26601b208ac73d(r14[2]);
    
    if result == 0
    {
        return result;
    }
    
    /* tailcall */
    _$LT$alacritty..renderer..text..gles2..RenderApi$u20$as$u20$alacritty..renderer..text..TextRenderApi$LT$alacritty..renderer..text..gles2..Batch$GT$$GT$::render_batch::h45ff3cec58968cac(arg1)
}
