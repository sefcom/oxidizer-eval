void __rustcall uu_wc::word_count_from_reader_specialized(undefined4 *param_1)

{
  undefined local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined local_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  undefined local_2c;
  
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  _<std::fs::File_as_uu_wc::countable::WordCountable>::buffered(local_68);
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_a9 = 0;
  do {
    while( true ) {
      while( true ) {
                    /* try { // try from 001bccdb to 001bcce5 has its CatchHandler @ 001bcd7e */
        utf8::read::BufReadDecoder<B>::next_strict(&local_80,local_68);
        if (local_80 == 2) {
                    /* try { // try from 001bcd35 to 001bcd3e has its CatchHandler @ 001bcd7c */
          core::ptr::
          drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>
                    (&local_80);
          *(undefined8 *)(param_1 + 8) = local_88;
          param_1[4] = (undefined4)local_98;
          param_1[5] = local_98._4_4_;
          param_1[6] = (undefined4)uStack_90;
          param_1[7] = uStack_90._4_4_;
          *param_1 = (undefined4)local_a8;
          param_1[1] = local_a8._4_4_;
          param_1[2] = (undefined4)uStack_a0;
          param_1[3] = uStack_a0._4_4_;
          *(undefined8 *)(param_1 + 10) = 0;
          goto LAB_001bcd61;
        }
        if (local_80 != 0) break;
        process_chunk(&local_a8,local_78,local_70,&local_a9);
      }
      if (local_78 == 0) break;
      local_a8 = local_a8 + local_70;
    }
  } while (local_70 == 0);
  *(undefined8 *)(param_1 + 8) = local_88;
  param_1[4] = (undefined4)local_98;
  param_1[5] = local_98._4_4_;
  param_1[6] = (undefined4)uStack_90;
  param_1[7] = uStack_90._4_4_;
  *param_1 = (undefined4)local_a8;
  param_1[1] = local_a8._4_4_;
  param_1[2] = (undefined4)uStack_a0;
  param_1[3] = uStack_a0._4_4_;
  *(long *)(param_1 + 10) = local_70;
LAB_001bcd61:
  core::ptr::
  drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>
            (local_68);
  return;
}