undefined  [16] __rustcall uu_more::search_pattern_in_file(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  long local_20;
  long lStack_18;
  long lVar2;
  
  if (*param_3 == -0x8000000000000000) {
    local_38 = 1;
    lStack_30 = 0;
    local_40 = 0;
  }
  else {
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_28,param_3);
    local_38 = local_20;
    lStack_30 = lStack_18;
    local_40 = local_28;
  }
  if ((param_2 == 0) || (lStack_30 == 0)) {
    uVar4 = 0;
  }
  else {
    local_20 = param_1 + param_2 * 0x18;
    lStack_18 = 0;
    lVar3 = param_1;
    local_28 = param_1;
    do {
      auVar5 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
               ::next(&local_28);
      lVar2 = auVar5._8_8_;
      param_1 = auVar5._0_8_;
      if (lVar2 == 0) {
        core::ptr::drop_in_place<alloc::string::String>(&local_40);
        uVar4 = 0;
        goto LAB_001ddc73;
      }
                    /* try { // try from 001ddc52 to 001ddc59 has its CatchHandler @ 001ddc90 */
      cVar1 = _<&str_as_core::str::pattern::Pattern>::is_contained_in
                        (local_38,lStack_30,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10)
                        );
      lVar3 = param_1;
    } while (cVar1 == '\0');
    uVar4 = 1;
  }
  core::ptr::drop_in_place<alloc::string::String>(&local_40);
  lVar3 = param_1;
LAB_001ddc73:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}