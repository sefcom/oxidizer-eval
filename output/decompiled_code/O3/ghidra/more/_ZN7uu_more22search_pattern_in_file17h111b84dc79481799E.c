undefined  [16] __rustcall uu_more::search_pattern_in_file(long param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined8 unaff_RBX;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  long lVar2;
  
  if (*param_3 == -0x8000000000000000) {
    local_50 = 0;
    local_48 = 1;
    local_40 = 0;
    uVar4 = 0;
  }
  else {
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_50,param_3);
    uVar4 = 0;
    if ((param_2 != 0) && (local_40 != 0)) {
      local_30 = param_1 + param_2 * 0x18;
      local_28 = 0;
      uVar3 = unaff_RBX;
      local_38 = param_1;
      do {
        auVar5 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_38);
        lVar2 = auVar5._8_8_;
        unaff_RBX = auVar5._0_8_;
        if (lVar2 == 0) {
          core::ptr::drop_in_place<alloc::string::String>(&local_50);
          uVar4 = 0;
          goto LAB_001ddfb2;
        }
                    /* try { // try from 001de032 to 001de039 has its CatchHandler @ 001de05b */
        cVar1 = _<&str_as_core::str::pattern::Pattern>::is_contained_in
                          (local_48,local_40,*(undefined8 *)(lVar2 + 8),
                           *(undefined8 *)(lVar2 + 0x10));
        uVar3 = unaff_RBX;
      } while (cVar1 == '\0');
      uVar4 = 1;
    }
  }
  core::ptr::drop_in_place<alloc::string::String>(&local_50);
  uVar3 = unaff_RBX;
LAB_001ddfb2:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}