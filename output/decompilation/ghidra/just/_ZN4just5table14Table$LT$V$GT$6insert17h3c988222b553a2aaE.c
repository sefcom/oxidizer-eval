void _ZN4just5table14Table_LT_V_GT_6insert17h3c988222b553a2aaE
               (undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined local_b0 [152];
  
                    /* try { // try from 00391672 to 0039167a has its CatchHandler @ 003916a9 */
  auVar1 = (*(code *)
             PTR__ZN53__LT_just__set__Set_u20_as_u20_just__keyed__Keyed_GT_3key17hded57a836a19343eE_00566c98
           )(param_2);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h80c0a734d02c1192E
            (local_b0,param_1,auVar1._0_8_,auVar1._8_8_,param_2);
  _ZN4core3ptr63drop_in_place_LT_core__option__Option_LT_just__set__Set_GT__GT_17hecc443bf5b384169E
            (local_b0);
  return;
}