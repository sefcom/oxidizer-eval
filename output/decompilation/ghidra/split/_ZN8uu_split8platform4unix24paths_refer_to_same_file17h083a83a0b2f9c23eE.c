void _ZN8uu_split8platform4unix24paths_refer_to_same_file17h083a83a0b2f9c23eE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined local_150 [152];
  undefined8 local_b8 [19];
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                    (param_1,param_2,&DAT_00122007,1);
  if (cVar1 == '\0') {
    _ZN6uucore8features2fs15FileInformation9from_path17h686b487309c4fcb4E
              (local_150,param_1,param_2,1);
  }
  else {
    local_b8[0] = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    _ZN6uucore8features2fs15FileInformation9from_file17h236d795e60a1b5ffE(local_150,local_b8);
  }
                    /* try { // try from 001d6246 to 001d625d has its CatchHandler @ 001d6280 */
  _ZN6uucore8features2fs15FileInformation9from_path17h686b487309c4fcb4E(local_b8,param_3,param_4,1);
  _ZN6uucore8features2fs24infos_refer_to_same_file17hac0be2843bccd14eE(local_150,local_b8);
  return;
}