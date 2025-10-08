void _ZN2rg5flags5parse18find_similar_names17hae5f1ed6e0368f47E(undefined4 *param_1)

{
  undefined8 uVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined4 *local_88;
  long local_80;
  undefined local_78 [24];
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_a8 = 0;
  uStack_a0 = 8;
  local_98 = 0;
                    /* try { // try from 003556bd to 003556c6 has its CatchHandler @ 0035585a */
  local_88 = param_1;
  _ZN2rg5flags5parse6ngrams17hd8afd45d5ce1348eE(local_78);
  lVar3 = 0;
  do {
    uVar1 = *(undefined8 *)((long)&DAT_004e9308 + lVar3);
    local_90 = *(long *)((long)&PTR_DAT_004e9310 + lVar3);
                    /* try { // try from 003556f5 to 00355715 has its CatchHandler @ 00355880 */
    local_80 = lVar3;
    auVar5 = (**(code **)(local_90 + 0x30))(uVar1);
    _ZN2rg5flags5parse6ngrams17hd8afd45d5ce1348eE(local_60,auVar5._0_8_);
                    /* try { // try from 00355716 to 00355760 has its CatchHandler @ 00355885 */
    dVar2 = (double)_ZN2rg5flags5parse13jaccard_index17hd9a913bae41cbb90E(local_78,local_60);
    if (_DAT_00163058 <= dVar2) {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h047e906916f0227dE
                (&local_a8,auVar5._0_8_,auVar5._8_8_,&PTR_s_crates_core_flags_parse_rs_004eb650);
    }
    auVar5 = (**(code **)(local_90 + 0x40))(uVar1);
    lVar3 = auVar5._0_8_;
    if (lVar3 != 0) {
      _ZN2rg5flags5parse6ngrams17hd8afd45d5ce1348eE(local_48,lVar3);
                    /* try { // try from 00355761 to 0035578a has its CatchHandler @ 00355871 */
      dVar2 = (double)_ZN2rg5flags5parse13jaccard_index17hd9a913bae41cbb90E(local_78,local_48);
      if (_DAT_00163058 <= dVar2) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h047e906916f0227dE
                  (&local_a8,lVar3,auVar5._8_8_,&PTR_s_crates_core_flags_parse_rs_004eb668);
      }
                    /* try { // try from 0035578b to 0035579d has its CatchHandler @ 00355885 */
      _ZN4core3ptr107drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT__GT_17h30608e6e4cd4aa96E
                (local_48);
    }
    auVar5 = (**(code **)(local_90 + 0x38))(uVar1);
    lVar3 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      lVar4 = 0;
      do {
                    /* try { // try from 003557c9 to 003557d0 has its CatchHandler @ 00355896 */
        _ZN2rg5flags5parse6ngrams17hd8afd45d5ce1348eE
                  (local_48,*(undefined8 *)(lVar3 + lVar4),*(undefined8 *)(lVar3 + 8 + lVar4));
                    /* try { // try from 003557d1 to 003557fd has its CatchHandler @ 00355887 */
        dVar2 = (double)_ZN2rg5flags5parse13jaccard_index17hd9a913bae41cbb90E(local_78,local_48);
        if (_DAT_00163058 <= dVar2) {
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h047e906916f0227dE
                    (&local_a8,*(undefined8 *)(lVar3 + lVar4),*(undefined8 *)(lVar3 + 8 + lVar4),
                     &PTR_s_crates_core_flags_parse_rs_004eb680);
        }
                    /* try { // try from 003557fe to 00355805 has its CatchHandler @ 00355896 */
        _ZN4core3ptr107drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT__GT_17h30608e6e4cd4aa96E
                  (local_48);
        lVar4 = lVar4 + 0x10;
      } while (auVar5._8_8_ << 4 != lVar4);
    }
                    /* try { // try from 0035580f to 00355816 has its CatchHandler @ 00355880 */
    _ZN4core3ptr107drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT__GT_17h30608e6e4cd4aa96E
              (local_60);
    lVar3 = local_80 + 0x10;
  } while (lVar3 != 0x680);
  *(undefined8 *)(local_88 + 4) = local_98;
  *local_88 = (undefined4)local_a8;
  local_88[1] = local_a8._4_4_;
  local_88[2] = (undefined4)uStack_a0;
  local_88[3] = uStack_a0._4_4_;
  _ZN4core3ptr107drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT__GT_17h30608e6e4cd4aa96E
            (local_78);
  return;
}