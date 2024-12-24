void __rustcall uu_wc::Input::to_title(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_48;
  long local_40;
  long local_38;
  
  if (*param_2 != -0x7fffffffffffffff) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
              (&local_48,lVar1,lVar2);
    lVar6 = local_38;
    lVar5 = local_40;
    if ((local_48 != 0) ||
       (cVar3 = _<char_as_core::str::pattern::Pattern>::is_contained_in(local_40,local_38),
       lVar4 = -0x8000000000000000, cVar3 != '\0')) {
      uucore::features::quoting_style::escape_name
                (&local_48,lVar1,lVar2,
                 &anon_2d62524804cc4b2f7247b138d4e0921f_19_llvm_17271959582280866971);
      lVar4 = local_48;
      lVar5 = local_40;
      lVar6 = local_38;
    }
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar6;
    return;
  }
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = -0x7fffffffffffffff;
    return;
  }
  *param_1 = -0x8000000000000000;
  param_1[1] = (long)&DAT_0011e45f;
  param_1[2] = 1;
  return;
}