undefined  [16] __rustcall uu_od::odfunc(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  undefined auVar6 [16];
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined local_a8 [12];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 *local_60;
  code *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_80 = 0;
  local_78 = 1;
  local_70 = 0;
  puVar1 = *(undefined **)(param_3 + 0x18);
  local_68 = *(long *)(param_3 + 0x28);
  cVar3 = *(char *)(param_3 + 0x30);
  bVar5 = false;
  do {
                    /* try { // try from 00175bd0 to 00175cdd has its CatchHandler @ 00175e78 */
    inputdecoder::InputDecoder<I>::peek_read(&local_50,param_2);
    if ((char)uStack_38 == '\x03') {
      local_e0 = CONCAT44(uStack_4c,local_50);
                    /* try { // try from 00175d2d to 00175df8 has its CatchHandler @ 00175e5a */
      _local_a8 = (*(code *)PTR_util_name_00246950)();
      local_58 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = (undefined **)&DAT_0023e1d8;
      local_d0 = 2;
      uStack_b8 = 0;
      local_c8 = &local_60;
      local_c0 = 1;
      local_60 = (undefined8 *)local_a8;
      (*(code *)PTR__eprint_00246958)(&local_d8);
      local_a8._0_8_ = &local_e0;
      stack0xffffffffffffff60 = PTR_fmt_00246960;
      local_d8 = (undefined **)&DAT_0023e1f8;
      local_d0 = 2;
      uStack_b8 = 0;
      local_c0 = 1;
      local_c8 = (undefined8 **)local_a8;
      (*(code *)PTR__eprint_00246958)(&local_d8);
      (*(code *)PTR_print_final_offset_00246968)(param_1);
      auVar6 = (*(code *)PTR_from_00246970)(1);
                    /* try { // try from 00175e04 to 00175e2b has its CatchHandler @ 00175e58 */
      core::ptr::drop_in_place<std::io::error::Error>(local_e0);
LAB_00175e36:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_80);
      return auVar6;
    }
    local_a8._4_4_ = uStack_4c;
    local_a8._0_4_ = local_50;
    stack0xffffffffffffff60 = (undefined *)CONCAT44(uStack_44,uStack_48);
    local_98 = local_40;
    uStack_94 = uStack_3c;
    uStack_90 = uStack_38;
    uStack_8c = uStack_34;
    if (stack0xffffffffffffff60 == (undefined *)0x0) {
      (*(code *)PTR_print_final_offset_00246968)(param_1);
      cVar3 = _<uu_od::peekreader::PeekReader<R>as_uu_od::multifilereader::HasError>::has_error
                        (*(undefined8 *)(param_2 + 0x18));
      if (cVar3 == '\0') {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = puVar1;
        auVar6 = auVar6 << 0x40;
      }
      else {
        auVar6 = (*(code *)PTR_from_00246970)(1);
      }
      goto LAB_00175e36;
    }
    if (stack0xffffffffffffff60 == puVar1) {
      if (cVar3 != '\0') {
LAB_00175cc0:
        (*(code *)PTR_clone_buffer_00246938)(local_a8,&local_80);
        goto LAB_00175cd0;
      }
      auVar6 = (*(code *)PTR_get_buffer_00246920)(local_a8,0);
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (auVar6._0_8_,auVar6._8_8_,local_78,local_70);
      if (cVar2 == '\0') goto LAB_00175cc0;
      if (!bVar5) {
        local_d8 = &PTR_s_____0023e1c8;
        local_d0 = 1;
        local_c8 = (undefined8 **)&DAT_00000008;
        local_c0 = 0;
        uStack_b8 = 0;
        (*(code *)PTR__print_00246928)(&local_d8);
        bVar5 = true;
      }
    }
    else {
      puVar4 = stack0xffffffffffffff60 + local_68;
      if (puVar1 <= stack0xffffffffffffff60 + local_68) {
        puVar4 = puVar1;
      }
      (*(code *)PTR_zero_out_buffer_00246930)(local_a8,stack0xffffffffffffff60,puVar4);
LAB_00175cd0:
      (*(code *)PTR_format_byte_offset_00246940)(&local_d8,param_1);
                    /* try { // try from 00175ce8 to 00175cf5 has its CatchHandler @ 00175e69 */
      (*(code *)PTR_print_bytes_00246948)(local_d0,local_c8,local_a8,param_3);
                    /* try { // try from 00175cf6 to 00175cff has its CatchHandler @ 00175e78 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      bVar5 = false;
    }
    param_1[2] = (long)(stack0xffffffffffffff60 + param_1[2]);
    if (*param_1 != 0) {
      *param_1 = 1;
      param_1[1] = (long)(stack0xffffffffffffff60 + param_1[1]);
    }
  } while( true );
}