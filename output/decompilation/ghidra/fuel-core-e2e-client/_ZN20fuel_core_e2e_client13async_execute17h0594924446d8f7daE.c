void _ZN20fuel_core_e2e_client13async_execute17h0594924446d8f7daE
               (undefined8 param_1,undefined8 param_2)

{
  undefined local_190 [80];
  undefined local_140 [80];
  undefined local_f0 [205];
  undefined2 local_23;
  
                    /* try { // try from 009cb481 to 009cb48e has its CatchHandler @ 009cb504 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder18new_current_thread17h391fb842a92b00ecE_012b8308)
            (local_f0);
  local_23 = 0x101;
                    /* try { // try from 009cb49c to 009cb4bd has its CatchHandler @ 009cb509 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17hf094867463d9a51fE_012b8310)
            (local_140,local_f0);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7fdebaf14144e574E(local_190,local_140);
                    /* try { // try from 009cb4be to 009cb4cd has its CatchHandler @ 009cb4f3 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17hea9caf3841c880b3E(param_1,local_190,param_2);
                    /* try { // try from 009cb4d0 to 009cb4d9 has its CatchHandler @ 009cb509 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h83240521646c043eE(local_190)
  ;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h3774a8be8a43e7b4E(local_f0);
  return;
}