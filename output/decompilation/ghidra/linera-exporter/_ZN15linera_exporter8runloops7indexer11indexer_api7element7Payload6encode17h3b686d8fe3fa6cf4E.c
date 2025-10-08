void _ZN15linera_exporter8runloops7indexer11indexer_api7element7Payload6encode17h3b686d8fe3fa6cf4E
               (int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 6);
  if (*param_1 == 1) {
    _ZN5prost8encoding7message6encode17hf300023c9cd28ebbE();
    return;
  }
  _ZN5prost8encoding6varint13encode_varint17h255acfb5b1fd0b94E(10,param_2);
  uVar3 = _ZN101__LT_linera_storage_service__key_value_store__RequestReadValue_u20_as_u20_prost__message__Message_GT_11encoded_len17hd5969896e2d61097E
                    (uVar1,uVar2);
  _ZN5prost8encoding6varint13encode_varint17h255acfb5b1fd0b94E(uVar3,param_2);
  _ZN101__LT_linera_storage_service__key_value_store__RequestReadValue_u20_as_u20_prost__message__Message_GT_10encode_raw17h1aa6bd51d7254a19E
            (uVar1,uVar2,param_2);
  return;
}