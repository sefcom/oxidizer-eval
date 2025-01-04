void __rustcall
uu_env::string_parser::StringParser::get_chunk_with_length_at
          (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined extraout_DL;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_48 [16];
  undefined *local_38;
  long local_30;
  
  if ((ulong)param_2[1] < param_3) {
    local_78 = &PTR_s_mid_>_len_00248e80;
    local_70 = 1;
    local_68 = 8;
    local_60 = 0;
    uStack_58 = 0;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_78,&PTR_s_src_uu_env_src_string_parser_rs_00248ea8);
  }
  core::slice::_<impl[T]>::split_at_unchecked(local_48,*param_2);
  if (local_30 == 0) {
    param_1[1] = param_2[4];
    *(undefined *)(param_1 + 2) = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = native_int_str::get_char_from_native_int(*local_38);
    if (iVar1 == 0x110000) {
      lVar3 = 1;
      lVar4 = lVar3;
      if (local_30 != 1) {
        do {
          iVar1 = native_int_str::get_char_from_native_int(local_38[lVar3]);
          lVar4 = lVar3;
          if (iVar1 != 0x110000) break;
          lVar3 = lVar3 + 1;
          lVar4 = local_30;
        } while (local_30 != lVar3);
      }
      auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                         (lVar4,local_38,local_30);
      *(undefined (*) [16])(param_1 + 1) = auVar5;
      param_1[3] = auVar5._8_8_;
    }
    else {
      param_1[1] = 0;
      *(int *)(param_1 + 2) = iVar1;
      *(undefined *)((long)param_1 + 0x14) = extraout_DL;
      param_1[3] = 1;
    }
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}