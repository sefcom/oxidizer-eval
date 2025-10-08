
  fn check_docs::validate_md_files::ha2d5d22a4b1fbbc4(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64) -> *mut i128

{
    let r12: i64 = arg3[2];
    let mut var_58: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_58, 
        arg3[1], r12);
    let var_68: i64 = 0;
    let var_60: i64 = r12;
    let var_28: i16 = 0;
    let mut var_70: *mut i64 = arg2;
    core::iter::traits::iterator::Iterator::collect::h49a2701d782b822b(arg1, &var_70);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfaeafffef128df0d(arg3);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h1dadcf951b1db9c1(arg2);
    arg1
}
