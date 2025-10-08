void _ZN15linera_exporter8runloops21start_block_processor17h40fd3e1af3acab98E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8_00,
               long param_8)

{
  undefined4 local_fc4;
  undefined local_fc0 [80];
  undefined local_f70 [80];
  undefined local_f20 [205];
  undefined2 local_e53;
  undefined local_e48 [1712];
  undefined4 local_798;
  undefined4 uStack_790;
  long local_6e0;
  long local_6d8;
  undefined8 local_6d0;
  undefined4 *local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined local_6a3;
  
  local_6d8 = param_8 + 0x18;
  local_6e0 = param_8;
  local_6c8 = &local_fc4;
  local_798 = param_7;
  uStack_790 = param_8_00;
  local_6a3 = 0;
                    /* try { // try from 00a14019 to 00a14026 has its CatchHandler @ 00a140b8 */
  local_fc4 = param_6;
  local_6d0 = param_2;
  local_6c0 = param_4;
  local_6b8 = param_5;
  local_6b0 = param_3;
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder18new_current_thread17hdc7eca4ed249bc29E_015948a8)
            (local_f20);
  local_e53 = 0x101;
                    /* try { // try from 00a14034 to 00a14055 has its CatchHandler @ 00a140bd */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_01594888)
            (local_f70,local_f20);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h2c928d875f8f6f3aE(local_fc0,local_f70);
                    /* try { // try from 00a14056 to 00a1406a has its CatchHandler @ 00a140a7 */
  _ZN5tokio7runtime7runtime7Runtime8block_on17h05fe2da793dbde83E(param_1,local_fc0,local_e48);
                    /* try { // try from 00a1406d to 00a14076 has its CatchHandler @ 00a140bd */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h4dcd451b8ab22d9eE(local_fc0)
  ;
                    /* try { // try from 00a14077 to 00a14083 has its CatchHandler @ 00a140a2 */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17hb30b8e61c1016d89E(local_f20)
  ;
  _ZN4core3ptr62drop_in_place_LT_linera_service__config__DestinationConfig_GT_17h18e694d6a0d2a1a2E
            (param_8);
  _ZN4core3ptr112drop_in_place_LT_linera_storage__db_storage__DbStorage_LT_linera_views__backends__memory__MemoryDatabase_GT__GT_17h9a02639cd546ba47E
            (param_2);
  return;
}