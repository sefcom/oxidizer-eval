undefined  [16] _ZN10change_log4main17hc72d7e90c4cd200eE(void)

{
  undefined auVar1 [16];
  undefined auStack_3c48 [80];
  undefined local_3bf8 [80];
  undefined local_3ba8 [205];
  undefined2 local_3adb;
  undefined local_3ad0 [264];
  undefined local_39c8;
  undefined8 local_3018;
  undefined8 local_2018;
  undefined8 local_1018;
  
  local_1018 = 0;
  local_2018 = 0;
  local_3018 = 0;
  local_39c8 = 0;
                    /* try { // try from 0049a280 to 0049a28d has its CatchHandler @ 0049a309 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h235da01dc16fbfa2E_007f72e0)
            (local_3ba8);
  local_3adb = 0x101;
                    /* try { // try from 0049a29b to 0049a2ba has its CatchHandler @ 0049a30e */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17hb2dd4ab9909fd7b2E_007f72e8)
            (local_3bf8,local_3ba8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h90fb55d45514815aE(auStack_3c48,local_3bf8);
                    /* try { // try from 0049a2bb to 0049a2ca has its CatchHandler @ 0049a2fa */
  auVar1 = _ZN5tokio7runtime7runtime7Runtime8block_on17ha90c3be4c448e423E(auStack_3c48,local_3ad0);
                    /* try { // try from 0049a2d3 to 0049a2da has its CatchHandler @ 0049a30e */
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h28f1aab92bd65b74E
            (auStack_3c48);
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h05ec4047a7db46ffE
            (local_3ba8);
  return auVar1;
}