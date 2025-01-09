void __rustcall uu_wc::word_count_from_reader(undefined8 *param_1,undefined4 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined auVar4 [16];
  undefined4 local_c;
  
  cVar1 = *(char *)(param_3 + 0x1c);
  cVar2 = *(char *)(param_3 + 0x1b);
  cVar3 = *(char *)(param_3 + 0x1a);
  local_c = param_2;
  if (*(char *)(param_3 + 0x18) == '\0') {
    if (*(char *)(param_3 + 0x19) == '\0') {
      if (cVar3 == '\0') {
        if (cVar2 == '\0' && cVar1 == '\0') {
                    /* try { // try from 001ba148 to 001ba160 has its CatchHandler @ 001ba161 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic(&DAT_0011e262,0x28,&PTR_s_src_uu_wc_src_wc_rs_00231108);
        }
LAB_001ba0f0:
        if (cVar1 == '\0') {
          word_count_from_reader_specialized(param_1);
          return;
        }
        if (cVar2 != '\0') {
          word_count_from_reader_specialized();
          return;
        }
        word_count_from_reader_specialized();
        return;
      }
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba06a;
                    /* try { // try from 001ba117 to 001ba132 has its CatchHandler @ 001ba161 */
      count_fast::count_bytes_chars_and_lines_fast(param_1,&local_c);
    }
    else if (cVar3 == '\0') {
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba092;
      count_fast::count_bytes_chars_and_lines_fast(param_1,&local_c);
    }
    else {
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba00e;
                    /* try { // try from 001ba0d0 to 001ba0dc has its CatchHandler @ 001ba161 */
      count_fast::count_bytes_chars_and_lines_fast(param_1,&local_c);
    }
  }
  else if (*(char *)(param_3 + 0x19) == '\0') {
    if (cVar3 == '\0') {
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba0f0;
                    /* try { // try from 001ba0ac to 001ba0b5 has its CatchHandler @ 001ba161 */
      auVar4 = count_fast::count_bytes_fast(&local_c);
      *param_1 = auVar4._0_8_;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = auVar4._8_8_;
    }
    else {
      if (cVar2 != '\0' || cVar1 != '\0') {
LAB_001ba06a:
        if (cVar1 == '\0') {
          word_count_from_reader_specialized(param_1);
          return;
        }
        if (cVar2 != '\0') {
          word_count_from_reader_specialized();
          return;
        }
        word_count_from_reader_specialized();
        return;
      }
                    /* try { // try from 001ba030 to 001ba053 has its CatchHandler @ 001ba161 */
      count_fast::count_bytes_chars_and_lines_fast(param_1,&local_c);
    }
  }
  else if (cVar3 == '\0') {
    if (cVar2 != '\0' || cVar1 != '\0') {
LAB_001ba092:
      if (cVar1 == '\0') {
        word_count_from_reader_specialized(param_1);
        return;
      }
      if (cVar2 != '\0') {
        word_count_from_reader_specialized();
        return;
      }
      word_count_from_reader_specialized();
      return;
    }
    count_fast::count_bytes_chars_and_lines_fast(param_1,&local_c);
  }
  else {
    if (cVar2 != '\0' || cVar1 != '\0') {
LAB_001ba00e:
      if (cVar1 == '\0') {
        word_count_from_reader_specialized(param_1);
        return;
      }
      if (cVar2 != '\0') {
        word_count_from_reader_specialized();
        return;
      }
      word_count_from_reader_specialized();
      return;
    }
                    /* try { // try from 001b9fe6 to 001b9ff2 has its CatchHandler @ 001ba161 */
    count_fast::count_bytes_chars_and_lines_fast(param_1,&local_c);
  }
  core::ptr::drop_in_place<std::fs::File>(local_c);
  return;
}