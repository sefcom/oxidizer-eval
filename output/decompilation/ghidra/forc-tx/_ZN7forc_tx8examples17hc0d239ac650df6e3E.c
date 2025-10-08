undefined  [16] _ZN7forc_tx8examples17hc0d239ac650df6e3E(void)

{
  undefined auVar1 [16];
  undefined local_e0 [8];
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined local_28 [24];
  
  local_d8 = &PTR_s___Script_example_forc_tx_script___002d13a8;
  uStack_d0 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h2f8585fb2c8c23bcE
            (&local_70,
             "    # Script example\n    forc tx script --bytecode \"{path}/out/debug/name.bin\" --data \"{path}/data.bin\" \\\n        --receipts-root 0x2222222222222222222222222222222222222222222222222222222222222222\n\n"
             ,0xc6,&local_d8);
  local_d8 = &PTR_s___Multiple_inputs_forc_tx_create_002d13b8;
  uStack_d0 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
                    /* try { // try from 0022b4fe to 0022b51b has its CatchHandler @ 0022b61a */
  local_c8 = local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h2f8585fb2c8c23bcE
            (&local_58,
             "    # Multiple inputs\n    forc tx create --bytecode \"{name}/out/debug/name.bin\"\n        --storage-slots \"{path}/out/debug/name-storage_slots.json\"\n        --script-gas-limit 100 \\\n        --gas-price 0 \\\n        --maturity 0 \\\n        --witness ADFD \\\n        --witness DFDA \\\n        input coin \\\n            --utxo-id 0 \\\n            --output-ix 0 \\\n            --owner 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --witness-ix 0 \\\n            --maturity 0 \\\n        input contract \\\n            --utxo-id 1 \\\n            --output-ix 1 \\\n            --balance-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --state-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --contract-id 0xCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC \\\n        output coin \\\n            --to 0x2222222222222222222222222222222222222222222222222222222222222222 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n        output contract \\\n            --input-ix 1 \\\n            --balance-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --state-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n        output change \\\n            --to 0x2222222222222222222222222222222222222222222222222222222222222222 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n        output variable \\\n            --to 0x2222222222222222222222222222222222222222222222222222222222222222 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n        output contract-created \\\n            --contract-id 0xCCCC..." /* TRUNCATED STRING LITERAL */
             ,0x8a5,&local_d8);
  local_88 = local_58;
  uStack_80 = uStack_50;
  local_78 = local_48;
  local_d8 = &PTR_s___An_example_constructing_a_crea_002d13c8;
  uStack_d0 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
                    /* try { // try from 0022b558 to 0022b575 has its CatchHandler @ 0022b5fb */
  local_c8 = local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h2f8585fb2c8c23bcE
            (&local_40,
             "    # An example constructing a create transaction\n    forc tx create \\\n        --bytecode {path}/out/debug/name.bin \\\n        --storage-slots {path}/out/debug/name-storage_slots.json \\\n        --script-gas-limit 100 \\\n        --gas-price 0 \\\n        --maturity 0 \\\n        --witness ADFD \\\n        --witness DFDA \\\n        input coin \\\n            --utxo-id 0 \\\n            --output-ix 0 \\\n            --owner 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --witness-ix 0 \\\n            --maturity 0 \\\n        input contract \\\n            --utxo-id 1 \\\n            --output-ix 1 \\\n            --balance-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --state-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --contract-id 0xCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC \\\n        input message \\\n            --sender 0x1111111111111111111111111111111111111111111111111111111111111111 \\\n            --recipient 0x2222222222222222222222222222222222222222222222222222222222222222 \\\n            --amount 1 \\\n            --nonce 0xBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB \\\n            --msg-data {path}/message.dat \\\n            --predicate {path}/my-predicate2.bin \\\n            --predicate-data {path}/my-predicate2.dat \\\n        output coin \\\n            --to 0x2222222222222222222222222222222222222222222222222222222222222222 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n        output contract \\\n            --input-ix 1 \\\n            --balance-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --state-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n        output ..." /* TRUNCATED STRING LITERAL */
             ,0xa9b,&local_d8);
  local_d8 = local_70;
  uStack_d0 = uStack_68;
  local_c8 = (undefined *)local_60;
  local_c0 = local_88;
  uStack_b8 = uStack_80;
  local_b0 = local_78;
  local_a8 = local_40;
  uStack_a4 = uStack_3c;
  uStack_a0 = uStack_38;
  uStack_9c = uStack_34;
  local_98 = local_30;
                    /* try { // try from 0022b5bb to 0022b5d9 has its CatchHandler @ 0022b62f */
  _ZN5alloc3str17join_generic_copy17h36acb9419b7494deE(local_28,&local_d8);
  auVar1 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17h3595125297bd929dE(local_28);
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_3_u5d__GT_17h28e83d271d4d3334E
            (&local_d8);
  return auVar1;
}