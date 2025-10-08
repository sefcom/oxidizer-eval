void _ZN15linera_exporter8runloops18validator_exporter18TaskQueue_LT_S_GT_3new17h310fdecbfc1ec1b6E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  
                    /* try { // try from 00a017b7 to 00a017be has its CatchHandler @ 00a01801 */
  auVar1 = _ZN5tokio4sync4mpsc7bounded7channel17hb6630436cfb29c8fE(param_2);
  (*(code *)PTR_memcpy_01592358)(param_1,param_4,0x110);
  *(long *)(param_1 + 0x110) = auVar1._0_8_;
  *(undefined8 *)(param_1 + 0x118) = param_2;
  *(undefined8 *)(param_1 + 0x120) = param_3;
  *(long *)(param_1 + 0x128) = auVar1._8_8_;
  return;
}