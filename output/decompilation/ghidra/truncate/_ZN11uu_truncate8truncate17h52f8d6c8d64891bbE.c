undefined  [16]
_ZN11uu_truncate8truncate17h52f8d6c8d64891bbE
          (byte param_1,undefined8 param_2,undefined8 *param_3,long *param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  
  uVar1 = *param_3;
  lVar2 = *param_4;
  uVar3 = param_3[1];
  if (lVar2 == -0x8000000000000000) {
                    /* try { // try from 00159828 to 0015983c has its CatchHandler @ 001598b9 */
    auVar5 = _ZN11uu_truncate28truncate_reference_file_only17h81d650944660fde8E
                       (uVar3,param_3[2],param_5,param_6,param_1 ^ 1);
  }
  else {
    lVar4 = param_4[1];
                    /* try { // try from 0015984d to 0015985e has its CatchHandler @ 001598a9 */
    auVar5 = _ZN11uu_truncate27truncate_reference_and_size17h51f53258c03351bbE
                       (uVar3,param_3[2],lVar4,param_4[2],param_5,param_6,param_1 ^ 1);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e1035533d42b527E(lVar2,lVar4);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e1035533d42b527E(uVar1,uVar3);
  return auVar5;
}