long _ZN7spyware13communication6server13send_response17h17eae7eef2507d79E
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 **local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_88 = param_2;
  _ZN7spyware13communication13serialization17serialize_message17hd905e118d95099f9E
            (&local_78,param_1);
  pppuVar4 = (undefined8 ***)local_68;
  uVar3 = local_70;
  local_a0 = local_78;
  local_98 = local_70;
  local_90 = local_68;
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar1) {
    local_80 = &local_a0;
    local_48 = &local_80;
    local_40 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h08d9ba86704c45faE;
    local_78 = &PTR_DAT_001b8ae8;
    local_70 = 1;
    local_58 = 0;
    local_68 = &local_48;
    local_60 = 1;
                    /* try { // try from 0014c509 to 0014c574 has its CatchHandler @ 0014c597 */
    local_18 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001b8af8);
    local_38 = &DAT_001120dc;
    local_30 = 0x1e;
    local_28 = &DAT_001120dc;
    local_20 = 0x1e;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_78,4,&local_38);
    uVar3 = local_98;
    pppuVar4 = (undefined8 ***)local_90;
  }
  lVar2 = _ZN3std2io5Write9write_all17h86cd82e88e6fd894E(&local_88,uVar3,pppuVar4);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5aa1feab37440eedE(&local_a0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}