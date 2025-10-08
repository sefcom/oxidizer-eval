void _ZN8uu_split8platform4unix24paths_refer_to_same_file17h8ca9878e54b136ffE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined local_150 [152];
  undefined local_b8 [152];
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                    (param_1,param_2,"-",1);
  if (cVar1 == '\0') {
    _ZN6uucore8features2fs15FileInformation9from_path17h5f490f25eeb77bb6E(local_150,param_1,param_2)
    ;
  }
  else {
    (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_002120f0)();
    _ZN6uucore8features2fs15FileInformation9from_file17he49478530e7a03d6E(local_150);
  }
                    /* try { // try from 0016c451 to 0016c463 has its CatchHandler @ 0016c486 */
  _ZN6uucore8features2fs15FileInformation9from_path17h5f490f25eeb77bb6E(local_b8,param_3,param_4);
  (*(code *)PTR__ZN6uucore8features2fs24infos_refer_to_same_file17hd2cf53814f14dc93E_002120f8)
            (local_150,local_b8);
  return;
}