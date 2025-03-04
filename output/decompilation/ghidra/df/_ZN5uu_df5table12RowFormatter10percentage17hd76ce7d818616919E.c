/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN5uu_df5table12RowFormatter10percentage17hd76ce7d818616919E
               (double param_1,undefined8 param_2,long param_3)

{
  undefined8 local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18;
  
  if (param_3 != 0) {
    local_90 = (*(code *)PTR_ceil_002463a8)(param_1 * _s__0010bfd0);
    local_88 = &local_90;
    local_80 = 
    _ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hdf81dcc7e03fc666E
    ;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 2;
    local_28 = 0;
    local_20 = 0x20;
    local_18 = 3;
    local_78 = &DAT_00241b30;
    local_70 = 2;
    local_58 = &local_48;
    local_50 = 1;
    local_68 = &local_88;
    local_60 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h87f8290896e212c8E(param_2,&local_78);
    return;
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hed7ddb801416678dE
            (param_2,"-",1);
  return;
}