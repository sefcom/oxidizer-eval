void _ZN2rg5flags6hiargs6HiArgs12printer_json17h0c8b4ba512914bf1E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_50;
  undefined local_4f;
  undefined local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined local_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
                    /* try { // try from 0034f262 to 0034f26a has its CatchHandler @ 0034f2ef */
  (*(code *)PTR__ZN12grep_printer4json11JSONBuilder3new17hd89cf9e777596ecaE_005270d8)(&local_68);
  local_50 = 0;
  local_68 = *(undefined4 *)(param_2 + 0x20);
  uStack_64 = *(undefined4 *)(param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 0x28);
  uStack_5c = *(undefined4 *)(param_2 + 0x2c);
  local_4f = 0;
                    /* try { // try from 0034f2a3 to 0034f2ce has its CatchHandler @ 0034f302 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h92b52b9ab5dd1bb4E
            (local_30,*(undefined8 *)(param_2 + 0x2b8),*(undefined8 *)(param_2 + 0x2c0));
  local_40 = local_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  uStack_34 = uStack_1c;
  uVar1 = (*(code *)
            PTR__ZN12grep_printer4json11JSONBuilder11replacement17h6ab1db9108ab72deE_005270e0)
                    (&local_68,local_48);
  _ZN12grep_printer4json11JSONBuilder5build17h801341b4b2a5f701E(param_1,uVar1,param_3);
  _ZN4core3ptr52drop_in_place_LT_grep_printer__json__JSONBuilder_GT_17h05b0645f085f78aeE(&local_68);
  return;
}