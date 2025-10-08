void _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4recv17h8dbfc300797ecbf6E
               (undefined2 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0x10) != '\x01') {
    _ZN17crossbeam_channel7channel17Receiver_LT_T_GT_13recv_deadline17he57f85ea4e30a7f4E
              (param_1,*param_2,param_2[1],param_2[10],*(undefined4 *)(param_2 + 0xb));
    return;
  }
  lVar1 = _ZN17crossbeam_channel7channel17Receiver_LT_T_GT_4recv17hdffb11d5d62c826eE
                    (*param_2,param_2[1]);
  if (lVar1 != 0) {
    *(long *)(param_1 + 4) = lVar1;
    *(undefined *)param_1 = 0;
    return;
  }
  *param_1 = 0x101;
  return;
}