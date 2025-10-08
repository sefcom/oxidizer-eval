void _ZN2rg5flags3doc7version14generate_short17h331b40a84196a55dE(undefined8 param_1)

{
  undefined8 extraout_RDX;
  undefined *local_68;
  code *local_60;
  undefined local_58 [24];
  undefined **local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  _ZN2rg5flags3doc7version15generate_digits17hfdf8238140a9a514E(local_58);
  local_60 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_40 = &PTR_DAT_004eaab8;
  local_38 = 1;
  local_20 = 0;
  local_28 = 1;
                    /* try { // try from 0034c4a6 to 0034c4b4 has its CatchHandler @ 0034c4c7 */
  local_68 = local_58;
  local_30 = (undefined *)&local_68;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
            (param_1,0,extraout_RDX,&local_40);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_58);
  return;
}