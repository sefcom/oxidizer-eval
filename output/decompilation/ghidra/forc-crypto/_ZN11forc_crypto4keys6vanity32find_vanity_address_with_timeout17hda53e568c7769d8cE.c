undefined8 *
_ZN11forc_crypto4keys6vanity32find_vanity_address_with_timeout17hda53e568c7769d8cE
          (undefined8 *param_1,undefined4 *param_2,undefined param_3,ulong param_4,
          undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined *puStack_120;
  undefined local_c0;
  
  local_168 = 1;
  uStack_160 = 1;
  local_158 = local_158 & 0xffffff00;
                    /* try { // try from 004fb4ad to 004fb4b9 has its CatchHandler @ 004fb68f */
  local_208 = (long *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h489983783fd8428cE(&local_168);
  LOCK();
  lVar1 = *local_208;
  *local_208 = *local_208 + 1;
  UNLOCK();
  if (*local_208 == 0 || SCARRY8(lVar1,1) != *local_208 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_1c0 = CONCAT31(uStack_1c0._1_3_,param_3);
  local_1f8 = *param_2;
  uStack_1f4 = param_2[1];
  uStack_1f0 = param_2[2];
  uStack_1ec = param_2[3];
  local_1e8 = param_2[4];
  uStack_1e4 = param_2[5];
  uStack_1e0 = param_2[6];
  uStack_1dc = param_2[7];
  local_1d8 = param_2[8];
  uStack_1d4 = param_2[9];
  uStack_1d0 = param_2[10];
  uStack_1cc = param_2[0xb];
  local_1c8 = local_208;
  if ((param_4 & 1) == 0) {
                    /* try { // try from 004fb543 to 004fb54f has its CatchHandler @ 004fb678 */
    _ZN11forc_crypto4keys6vanity32find_vanity_address_with_timeout28__u7b__u7b_closure_u7d__u7d_17h1a6c6fc763535fc1E
              (param_1,&local_1f8);
                    /* try { // try from 004fb550 to 004fb559 has its CatchHandler @ 004fb673 */
    _ZN4core3ptr109drop_in_place_LT_forc_crypto__keys__vanity__find_vanity_address_with_timeout___u7b__u7b_closure_u7d__u7d__GT_17h298b7ac34438445aE
              (&local_1f8);
  }
  else {
                    /* try { // try from 004fb4fd to 004fb50a has its CatchHandler @ 004fb678 */
    local_200 = param_5;
    (*(code *)PTR__ZN5tokio7runtime7runtime7Runtime3new17hd49dd2b0b53a5a7aE_00786fa8)(&local_168);
    if (local_168 != 2) {
      local_1a8 = CONCAT44(uStack_154,local_158);
      local_178 = local_128;
      uStack_170 = puStack_120;
      local_1b8 = local_168;
      local_1b0 = uStack_160;
      local_138 = (undefined4)local_1c8;
      uStack_134 = local_1c8._4_4_;
      uStack_130 = uStack_1c0;
      uStack_12c = uStack_1bc;
      local_148 = local_1d8;
      uStack_144 = uStack_1d4;
      uStack_140 = uStack_1d0;
      uStack_13c = uStack_1cc;
      local_158 = local_1e8;
      uStack_154 = uStack_1e4;
      uStack_150 = uStack_1e0;
      uStack_14c = uStack_1dc;
      local_168 = CONCAT44(uStack_1f4,local_1f8);
      uStack_160 = CONCAT44(uStack_1ec,uStack_1f0);
      local_128 = &local_200;
      local_c0 = 0;
                    /* try { // try from 004fb5ff to 004fb613 has its CatchHandler @ 004fb645 */
      puStack_120 = (undefined *)&local_208;
      _ZN5tokio7runtime7runtime7Runtime8block_on17hb7bf6f4de204da21E(param_1,&local_1b8,&local_168);
                    /* try { // try from 004fb614 to 004fb61b has its CatchHandler @ 004fb63b */
      _ZN4core3ptr75drop_in_place_LT_alloc__sync__Arc_LT_core__sync__atomic__AtomicBool_GT__GT_17h857db8784fc23113E
                (&local_208);
      _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h3587b7cd99d49c29E
                (&local_1b8);
      return param_1;
    }
                    /* try { // try from 004fb521 to 004fb525 has its CatchHandler @ 004fb65c */
    uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h12fd0a7a4d9bffcbE
                      ();
    *param_1 = uVar3;
    param_1[8] = 0x8000000000000001;
                    /* try { // try from 004fb537 to 004fb540 has its CatchHandler @ 004fb640 */
    _ZN4core3ptr109drop_in_place_LT_forc_crypto__keys__vanity__find_vanity_address_with_timeout___u7b__u7b_closure_u7d__u7d__GT_17h298b7ac34438445aE
              (&local_1f8);
  }
  _ZN4core3ptr75drop_in_place_LT_alloc__sync__Arc_LT_core__sync__atomic__AtomicBool_GT__GT_17h857db8784fc23113E
            (&local_208);
  return param_1;
}