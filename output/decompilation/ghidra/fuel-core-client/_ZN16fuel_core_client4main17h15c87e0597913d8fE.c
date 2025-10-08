void _ZN16fuel_core_client4main17h15c87e0597913d8fE(void)

{
  undefined auStack_4b8 [80];
  undefined local_468 [80];
  undefined local_418 [205];
  undefined2 local_34b;
  undefined local_340 [808];
  undefined local_18;
  
  local_18 = 0;
                    /* try { // try from 00401711 to 0040171e has its CatchHandler @ 0040178c */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder18new_current_thread17h391fb842a92b00ecE_00720a28)
            (local_418);
  local_34b = 0x101;
                    /* try { // try from 0040172c to 0040174b has its CatchHandler @ 00401791 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17hf094867463d9a51fE_00720a30)
            (local_468,local_418);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hbaf122cf264c35d8E(auStack_4b8,local_468);
                    /* try { // try from 0040174c to 0040175b has its CatchHandler @ 0040177d */
  _ZN5tokio7runtime7runtime7Runtime8block_on17hbb611f225d4a657aE(auStack_4b8,local_340);
                    /* try { // try from 0040175e to 00401765 has its CatchHandler @ 00401791 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h8c13f257b322a1a7E
            (auStack_4b8);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h8713507afeff55b1E(local_418)
  ;
  return;
}