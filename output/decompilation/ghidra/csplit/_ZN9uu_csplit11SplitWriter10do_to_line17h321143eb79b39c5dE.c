void __rustcall
uu_csplit::SplitWriter::do_to_line
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
          long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  char cVar5;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8 [3];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined *)(param_6 + 0x38) = 1;
  *(undefined8 *)(param_6 + 0x30) = 1;
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&uStack_a8,param_3,param_4);
  puVar2 = PTR_writeln_0041f8b0;
  local_b0 = 1;
  do {
                    /* try { // try from 0025edc0 to 0025edca has its CatchHandler @ 0025f040 */
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next(&local_50,param_6)
    ;
    if (local_48 == -0x7fffffffffffffff) {
LAB_0025ef48:
                    /* try { // try from 0025ef48 to 0025ef8d has its CatchHandler @ 0025f02f */
      (*(code *)PTR_finish_split_0041f8b8)(param_2);
      param_1[4] = local_90;
      param_1[2] = local_a0;
      param_1[3] = uStack_98;
      *param_1 = local_b0;
      param_1[1] = uStack_a8;
      return;
    }
    if (local_48 == -0x8000000000000000) {
      *param_1 = 0;
      param_1[1] = local_40;
LAB_0025ef8e:
      core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>
                (&local_b0);
      return;
    }
    local_e0 = local_48;
    uStack_d8 = local_40;
    local_d0 = local_38;
    cVar5 = local_50 + 1U != param_5;
    if (param_5 < local_50 + 1U) {
      cVar5 = -1;
    }
    if (cVar5 != '\x01') {
      if (cVar5 == '\0') {
        cVar5 = *(char *)(*(long *)(param_2 + 0x20) + 99);
        if (cVar5 == '\0') {
          local_78 = local_38;
                    /* try { // try from 0025ee81 to 0025eeb4 has its CatchHandler @ 0025f02d */
          InputSplitter<I>::add_line_to_buffer(local_c8,param_6,local_50,&local_88);
          if (local_c8[0] != -0x8000000000000000) {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(local_c8);
            ppuVar4 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deb78;
            goto LAB_0025efe6;
          }
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(local_c8);
        }
                    /* try { // try from 0025eeb5 to 0025eebe has its CatchHandler @ 0025f01a */
        core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>
                  (&local_b0);
        local_b0 = 0xc;
        if (cVar5 != '\0') {
                    /* try { // try from 0025eecd to 0025eed6 has its CatchHandler @ 0025f02f */
          core::ptr::drop_in_place<alloc::string::String>(&local_e0);
        }
      }
      else {
        local_78 = local_38;
                    /* try { // try from 0025ef05 to 0025ef34 has its CatchHandler @ 0025f02d */
        InputSplitter<I>::add_line_to_buffer(local_c8,param_6,local_50,&local_88);
        if (local_c8[0] != -0x8000000000000000) {
                    /* try { // try from 0025efaa to 0025f009 has its CatchHandler @ 0025f02d */
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(local_c8);
          ppuVar4 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deb60;
LAB_0025efe6:
          local_88 = &PTR_s_the_buffer_is_big_enough_to_cont_003deb50;
          uStack_80 = 1;
          local_78 = 8;
          local_70 = 0;
          uStack_68 = 0;
          (*(code *)PTR_panic_fmt_0041f810)(&local_88,ppuVar4);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(local_c8);
                    /* try { // try from 0025ef35 to 0025ef3e has its CatchHandler @ 0025f00c */
        core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>
                  (&local_b0);
        local_b0 = 0xc;
      }
      goto LAB_0025ef48;
    }
                    /* try { // try from 0025ee2b to 0025ee34 has its CatchHandler @ 0025f031 */
    lVar3 = (*(code *)puVar2)(param_2,local_40,local_38);
    if (lVar3 != 0) {
      *param_1 = 0;
      param_1[1] = lVar3;
      core::ptr::drop_in_place<alloc::string::String>(&local_e0);
      goto LAB_0025ef8e;
    }
                    /* try { // try from 0025ee3e to 0025ee47 has its CatchHandler @ 0025f040 */
    core::ptr::drop_in_place<alloc::string::String>(&local_e0);
  } while( true );
}