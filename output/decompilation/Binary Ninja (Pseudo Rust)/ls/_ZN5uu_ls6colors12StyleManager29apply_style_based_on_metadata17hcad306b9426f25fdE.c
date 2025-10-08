
  fn uu_ls::colors::StyleManager::apply_style_based_on_metadata::hcad306b9426f25fd(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void, arg4: i64, arg5: *mut i64, arg6: i8) -> i64

{
    /* tailcall */
    uu_ls::colors::StyleManager::apply_style::ha4cfaac237ebf5d9(arg1, arg2, 
        lscolors::LsColors::style_for_path_with_metadata::hbb82f8fcc80e73ed(*arg2, 
            arg3.byte_offset(0x18)), 
        arg5, arg6)
}
