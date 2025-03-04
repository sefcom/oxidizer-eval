/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN5uu_od9prn_float12format_float17h341a0cfde1a47520E
               (double param_1,undefined8 param_2,undefined8 *param_3,double **param_4)

{
  ulong uVar1;
  uint uVar2;
  double **ppdVar3;
  double dVar4;
  double dVar5;
  double *local_d8;
  code *local_d0;
  double **local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  double local_70;
  double *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  double local_38;
  
  ppdVar3 = &local_d8;
  local_70 = param_1;
  if (!NAN(param_1)) {
    uVar1 = (ulong)param_1 & 0x7ff0000000000000;
    if (((ulong)param_1 & 0xfffffffffffff) == 0) {
      if ((uVar1 != 0) && (uVar1 != 0x7ff0000000000000)) goto LAB_001d525a;
    }
    else if (uVar1 != 0) {
LAB_001d525a:
      local_38 = param_1;
      (*(code *)PTR_log10_00247928)(_DAT_0010d940 & (ulong)param_1);
      dVar4 = (double)(*(code *)PTR_floor_00247920)();
      dVar5 = dVar4;
      if (dVar4 <= DAT_0010e1a8) {
        dVar5 = DAT_0010e1a8;
      }
      if (_s__0010e130 <= dVar5) {
        dVar5 = _s__0010e130;
      }
      uVar2 = 0;
      if (!NAN(dVar4)) {
        uVar2 = (int)dVar5;
      }
      dVar5 = (double)(*(code *)PTR___powidf2_00247918)(_s__0010e110,uVar2);
      if (((0.0 < local_38) && (local_38 < dVar5)) ||
         ((local_38 < 0.0 && ((double)((ulong)dVar5 ^ _DAT_0010dbf0) < local_38)))) {
        uVar2 = uVar2 - 1;
      }
      if (((int)uVar2 < 0) || ((int)param_4 <= (int)uVar2)) {
        if (uVar2 == 0xffffffff) {
          local_d0 = 
          _ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hdf81dcc7e03fc666E
          ;
          local_c8 = param_4;
        }
        else {
          local_c8 = (double **)((long)param_4 + -1);
          local_d0 = 
          _ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f64_GT_3fmt17h74a47d8602c716a3E
          ;
        }
      }
      else {
        local_c8 = (double **)(~(ulong)uVar2 + (long)param_4);
        local_d0 = 
        _ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hdf81dcc7e03fc666E
        ;
      }
      local_d8 = &local_70;
      local_c0 = 0;
      local_b0 = 0;
      local_a8 = 1;
      local_a0 = 1;
      local_90 = 2;
      local_78 = 3;
      local_68 = (double *)&DAT_0010dad0;
      local_60 = (code *)0x1;
      local_48 = &local_a8;
      local_40 = 1;
      local_50 = 3;
      ppdVar3 = &local_68;
      local_b8 = param_3;
      local_58 = &local_d8;
      goto LAB_001d54b3;
    }
  }
  if (((param_1 != 0.0) || (NAN(param_1))) || (-1 < (long)param_1)) {
    if (((param_1 == 0.0) && (!NAN(param_1))) ||
       (_s__0010e090 <= (double)((ulong)param_1 & _DAT_0010d940))) {
      local_60 = 
      _ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hdf81dcc7e03fc666E
      ;
    }
    else {
      local_60 = 
      _ZN4core3fmt5float53__LT_impl_u20_core__fmt__LowerExp_u20_for_u20_f64_GT_3fmt17h74a47d8602c716a3E
      ;
    }
    local_68 = &local_70;
    local_78 = 3;
  }
  else {
    local_68 = (double *)&DAT_00242048;
    local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
    local_78 = 1;
  }
  local_50 = 0;
  local_90 = 1;
  local_a8 = 2;
  local_d8 = (double *)&DAT_0010dad0;
  local_d0 = (code *)0x1;
  local_b8 = &local_a8;
  local_b0 = 1;
  local_c8 = &local_68;
  local_c0 = 2;
  local_58 = param_3;
LAB_001d54b3:
  local_80 = 0x20;
  local_88 = 0;
  local_98 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(param_2,ppdVar3);
  return;
}