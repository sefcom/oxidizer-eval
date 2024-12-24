void __rustcall
uu_wc::word_count_from_reader_specialized(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined extraout_DL;
  undefined local_99;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_98 = _<std::io::stdio::StdinLock_as_uu_wc::countable::WordCountable>::buffered
                       (param_2,param_3);
  local_90 = CONCAT31(local_90._1_3_,extraout_DL) & 0xffffff01;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_99 = 0;
  local_50 = 0;
  do {
    while( true ) {
      while( true ) {
        utf8::read::BufReadDecoder<B>::next_strict(&local_48,&local_98);
        if (local_48 == 2) {
                    /* try { // try from 001bd105 to 001bd10e has its CatchHandler @ 001bd14e */
          core::ptr::
          drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>
                    (&local_48);
          *(undefined8 *)(param_1 + 8) = local_58;
          param_1[4] = (undefined4)local_68;
          param_1[5] = local_68._4_4_;
          param_1[6] = (undefined4)uStack_60;
          param_1[7] = uStack_60._4_4_;
          *param_1 = (undefined4)local_78;
          param_1[1] = local_78._4_4_;
          param_1[2] = (undefined4)uStack_70;
          param_1[3] = uStack_70._4_4_;
          *(undefined8 *)(param_1 + 10) = 0;
          goto LAB_001bd131;
        }
        if (local_48 != 0) break;
                    /* try { // try from 001bd0a0 to 001bd0b8 has its CatchHandler @ 001bd150 */
        process_chunk(&local_78,local_40,local_38,&local_50,&local_99);
      }
      if (local_40 == 0) break;
      local_78 = local_78 + local_38;
    }
  } while (local_38 == 0);
  *(undefined8 *)(param_1 + 8) = local_58;
  param_1[4] = (undefined4)local_68;
  param_1[5] = local_68._4_4_;
  param_1[6] = (undefined4)uStack_60;
  param_1[7] = uStack_60._4_4_;
  *param_1 = (undefined4)local_78;
  param_1[1] = local_78._4_4_;
  param_1[2] = (undefined4)uStack_70;
  param_1[3] = uStack_70._4_4_;
  *(long *)(param_1 + 10) = local_38;
LAB_001bd131:
  core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::stdio::StdinLock>>
            (local_98,local_90);
  return;
}