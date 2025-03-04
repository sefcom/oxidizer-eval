void _ZN5uu_wc22word_count_from_reader17hd0ebac2d03e30fccE
               (undefined8 *param_1,int param_2,long param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined auVar4 [16];
  int local_c;
  
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
          _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                    (&DAT_0011e262,0x28,&PTR_s_src_uu_wc_src_wc_rs_00231108);
        }
LAB_001ba0f0:
        if (cVar1 == '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17h9bdcd99cc6378816E(param_1);
          return;
        }
        if (cVar2 != '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17hcf58188208ea39bcE();
          return;
        }
        _ZN5uu_wc34word_count_from_reader_specialized17hb94caab2da1608c4E();
        return;
      }
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba06a;
                    /* try { // try from 001ba117 to 001ba132 has its CatchHandler @ 001ba161 */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17hdfffe1c8fb5fd667E(param_1,&local_c);
    }
    else if (cVar3 == '\0') {
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba092;
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17haca20aa05e84b1c1E(param_1,&local_c);
    }
    else {
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba00e;
                    /* try { // try from 001ba0d0 to 001ba0dc has its CatchHandler @ 001ba161 */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17hcc94ccba794e2fffE(param_1,&local_c);
    }
  }
  else if (*(char *)(param_3 + 0x19) == '\0') {
    if (cVar3 == '\0') {
      if (cVar2 != '\0' || cVar1 != '\0') goto LAB_001ba0f0;
                    /* try { // try from 001ba0ac to 001ba0b5 has its CatchHandler @ 001ba161 */
      auVar4 = _ZN5uu_wc10count_fast16count_bytes_fast17habd5ed9c294fb84eE(&local_c);
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
          _ZN5uu_wc34word_count_from_reader_specialized17h4d593fc0f43f9bcfE(param_1);
          return;
        }
        if (cVar2 != '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17hab046612f28a0bdcE();
          return;
        }
        _ZN5uu_wc34word_count_from_reader_specialized17hb360281d2d35178dE();
        return;
      }
                    /* try { // try from 001ba030 to 001ba053 has its CatchHandler @ 001ba161 */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17he40ae303cc0bd17fE(param_1,&local_c);
    }
  }
  else if (cVar3 == '\0') {
    if (cVar2 != '\0' || cVar1 != '\0') {
LAB_001ba092:
      if (cVar1 == '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17h919a69502965bff9E(param_1);
        return;
      }
      if (cVar2 != '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17hac99886e1e61c8a7E();
        return;
      }
      _ZN5uu_wc34word_count_from_reader_specialized17hd3a171cb03b8bcb0E();
      return;
    }
    _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h3d54c0eb4d87463cE(param_1,&local_c);
  }
  else {
    if (cVar2 != '\0' || cVar1 != '\0') {
LAB_001ba00e:
      if (cVar1 == '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17hf67f53152ea8a52bE(param_1);
        return;
      }
      if (cVar2 != '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17h2325bc60fba5da93E();
        return;
      }
      _ZN5uu_wc34word_count_from_reader_specialized17h42eb5bce6f526c18E();
      return;
    }
                    /* try { // try from 001b9fe6 to 001b9ff2 has its CatchHandler @ 001ba161 */
    _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17hd7978f18bcbb2d44E(param_1,&local_c);
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0bf56f1a5b3d62a1E(local_c);
  return;
}