void _ZN5uu_wc22word_count_from_reader17h0362b4aa77d3daddE
               (undefined8 *param_1,undefined8 param_2,undefined param_3,long param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  undefined auVar5 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = CONCAT31(local_10._1_3_,param_3);
  cVar1 = *(char *)(param_4 + 0x1a);
  cVar2 = *(char *)(param_4 + 0x1c);
  cVar3 = *(char *)(param_4 + 0x1b);
  local_18 = param_2;
  if (*(char *)(param_4 + 0x18) == '\0') {
    if (*(char *)(param_4 + 0x19) == '\0') {
      if (cVar1 == '\0') {
        if (cVar2 == '\0' && cVar3 == '\0') {
                    /* try { // try from 00166370 to 00166388 has its CatchHandler @ 0016638b */
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001ffcd8)
                    (&DAT_00119dd1,0x28,&PTR_s_src_uu_wc_src_wc_rs_001f9208);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
LAB_001662d3:
        if (cVar2 == '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17hfa36a0a2a76e68c2E(param_1,param_2,param_3)
          ;
          return;
        }
        if (cVar3 != '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17h12c6816495c7efc9E();
          return;
        }
        _ZN5uu_wc34word_count_from_reader_specialized17h2f66a94226ac6a31E(param_1);
        return;
      }
      if (cVar2 != '\0' || cVar3 != '\0') goto LAB_00166249;
                    /* try { // try from 00166313 to 0016631d has its CatchHandler @ 0016638b */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h7dabb93529648831E(param_1,&local_18)
      ;
    }
    else if (cVar1 == '\0') {
      if (cVar2 != '\0' || cVar3 != '\0') goto LAB_00166288;
                    /* try { // try from 0016632d to 00166337 has its CatchHandler @ 0016638b */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h911d90f4572ee7b3E(param_1,&local_18)
      ;
    }
    else {
      if (cVar2 != '\0' || cVar3 != '\0') goto LAB_001661f8;
                    /* try { // try from 001662f9 to 00166303 has its CatchHandler @ 0016638b */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h010e9b1655211949E(param_1,&local_18)
      ;
    }
  }
  else if (*(char *)(param_4 + 0x19) == '\0') {
    if (cVar1 == '\0') {
      if (cVar2 != '\0' || cVar3 != '\0') goto LAB_001662d3;
                    /* try { // try from 001662ae to 001662b5 has its CatchHandler @ 0016638b */
      auVar5 = _ZN5uu_wc10count_fast16count_bytes_fast17h1b572bf67c4143c1E(&local_18);
      *param_1 = auVar5._0_8_;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = auVar5._8_8_;
    }
    else {
      if (cVar2 != '\0' || cVar3 != '\0') {
LAB_00166249:
        if (cVar2 == '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17h49d44fc081c49452E(param_1,param_2,param_3)
          ;
          return;
        }
        if (cVar3 != '\0') {
          _ZN5uu_wc34word_count_from_reader_specialized17h1ff21f2149f3e7feE();
          return;
        }
        _ZN5uu_wc34word_count_from_reader_specialized17hba832f3c19c46faaE(param_1);
        return;
      }
                    /* try { // try from 00166227 to 00166231 has its CatchHandler @ 0016638b */
      _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h5088e933c52b60b5E(param_1,&local_18)
      ;
    }
  }
  else if (cVar1 == '\0') {
    if (cVar2 != '\0' || cVar3 != '\0') {
LAB_00166288:
      if (cVar2 == '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17h73cf1ac40f761e66E(param_1,param_2,param_3);
        return;
      }
      if (cVar3 != '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17h1ab6b4acdb650243E();
        return;
      }
      _ZN5uu_wc34word_count_from_reader_specialized17h7ce3c209db19c8fbE(param_1);
      return;
    }
                    /* try { // try from 0016626f to 00166279 has its CatchHandler @ 0016638b */
    _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17hef7b8a1cae262f0aE(param_1,&local_18);
  }
  else {
    if (cVar2 != '\0' || cVar3 != '\0') {
LAB_001661f8:
      if (cVar2 == '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17h1bc94b2850b9efacE(param_1,param_2,param_3);
        return;
      }
      if (cVar3 != '\0') {
        _ZN5uu_wc34word_count_from_reader_specialized17h0f5510fbc829928bE();
        return;
      }
      _ZN5uu_wc34word_count_from_reader_specialized17h2044c51d339121e2E(param_1);
      return;
    }
                    /* try { // try from 001661d1 to 001661db has its CatchHandler @ 0016638b */
    _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h55522c7657e43653E(param_1,&local_18);
  }
  _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h2083418ff4228a71E
            (local_18,local_10);
  return;
}