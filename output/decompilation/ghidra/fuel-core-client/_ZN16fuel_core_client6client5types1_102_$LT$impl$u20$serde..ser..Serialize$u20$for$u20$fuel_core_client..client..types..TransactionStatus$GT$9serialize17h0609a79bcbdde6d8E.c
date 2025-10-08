void _ZN16fuel_core_client6client5types1_102__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_client__client__types__TransactionStatus_GT_9serialize17h0609a79bcbdde6d8E
               (undefined *param_1,ulong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2 ^ 0x8000000000000000) {
  case 0:
    pcVar1 = "Submitted";
    uVar3 = 9;
    uVar4 = 1;
    uVar2 = 0;
    break;
  case 1:
    pcVar1 = "Success";
    uVar3 = 7;
    uVar4 = 6;
    uVar2 = 1;
    break;
  case 2:
    pcVar1 = "PreconfirmationSuccess";
    uVar3 = 0x16;
    uVar4 = 6;
    uVar2 = 2;
    break;
  case 3:
    pcVar1 = "SqueezedOut";
    uVar3 = 0xb;
    uVar4 = 1;
    uVar2 = 3;
    break;
  default:
    pcVar1 = "Failure";
    uVar3 = 7;
    uVar4 = 7;
    uVar2 = 4;
    break;
  case 5:
    pcVar1 = "PreconfirmationFailure";
    uVar3 = 0x16;
    uVar4 = 7;
    uVar2 = 5;
  }
  uVar2 = (*(code *)
            PTR__ZN82__LT_serde_json__value__ser__RawValueEmitter_u20_as_u20_serde__ser__Serializer_GT_23serialize_tuple_variant17h78046c57c286514bE_00720170
          )("TransactionStatus",0x11,uVar2,pcVar1,uVar3,uVar4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 6;
  return;
}