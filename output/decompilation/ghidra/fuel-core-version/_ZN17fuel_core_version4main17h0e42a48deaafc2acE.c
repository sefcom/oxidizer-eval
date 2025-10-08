long _ZN17fuel_core_version4main17h0e42a48deaafc2acE(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined local_38 [24];
  
  _ZN12clap_builder6derive6Parser5parse17hf5e8743141cb4a85E(&local_a8);
  cVar3 = (char)uStack_90;
  local_78 = local_a8;
  uStack_74 = uStack_a4;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
                    /* try { // try from 0017118d to 00171199 has its CatchHandler @ 001712cb */
  _ZN17fuel_core_version22read_fuel_core_version17hefde22257e8a198eE(&local_a8,&local_78);
  local_60 = CONCAT44(uStack_a4,local_a8);
  lVar4 = CONCAT44(uStack_9c,uStack_a0);
  if (local_60 != 0) {
    local_40 = local_88;
    local_50 = local_98;
    uStack_4c = uStack_94;
    uStack_48 = uStack_90;
    uStack_44 = uStack_8c;
                    /* try { // try from 001711ca to 001711d6 has its CatchHandler @ 001712b6 */
    uStack_58 = lVar4;
    _ZN17fuel_core_version21get_version_file_path17h4b460f2d9ec30e54E(&local_a8,&local_78);
    uVar1 = CONCAT44(uStack_a4,local_a8);
    uVar2 = CONCAT44(uStack_9c,uStack_a0);
    if (cVar3 == '\0') {
      local_88 = local_40;
      local_98 = local_50;
      uStack_94 = uStack_4c;
      uStack_90 = uStack_48;
      uStack_8c = uStack_44;
      local_a8 = (undefined4)local_60;
      uStack_a4 = local_60._4_4_;
      uStack_a0 = (undefined4)uStack_58;
      uStack_9c = uStack_58._4_4_;
                    /* try { // try from 0017126d to 00171279 has its CatchHandler @ 001712a4 */
      lVar4 = _ZN17fuel_core_version21write_version_to_file17hb006b210003cc812E(&local_a8,local_38);
    }
    else {
      local_88 = local_40;
      local_98 = local_50;
      uStack_94 = uStack_4c;
      uStack_90 = uStack_48;
      uStack_8c = uStack_44;
      local_a8 = (undefined4)local_60;
      uStack_a4 = local_60._4_4_;
      uStack_a0 = (undefined4)uStack_58;
      uStack_9c = uStack_58._4_4_;
                    /* try { // try from 00171219 to 00171220 has its CatchHandler @ 001712a6 */
      lVar4 = _ZN17fuel_core_version24verify_version_from_file17h505193d9cfd87079E(&local_a8);
      _ZN4core3mem4drop17h537fb6ac6377e35eE(uVar1,uVar2);
    }
    if (lVar4 == 0) {
      lVar4 = 0;
    }
  }
  _ZN4core3mem4drop17h537fb6ac6377e35eE(CONCAT44(uStack_74,local_78),CONCAT44(uStack_6c,uStack_70));
  return lVar4;
}