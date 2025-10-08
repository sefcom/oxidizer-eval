long long forc_tx::examples()
{
    char v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    char *v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xc0], Other Possible Types: uint128_t
    unsigned long long v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0x98]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x78]
    char v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x60]
    int v12;  // [bp-0x58], Other Possible Types: char
    unsigned long long v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x30]
    char v16;  // [bp-0x28]
    unsigned long long v18;  // rax

    v1 = &g_5d13a8;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    v10.map_or_else("    # Script example\n    forc tx script --bytecode \"{path}/out/debug/name.bin\" --data \"{path}/data.bin\" \\\n        --receipts-root 0x2222222222222222222222222222222222222222222222222222222222222222\n\n", 198, &v1);
    v1 = &g_5d13b8;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    v12.map_or_else("    # Multiple inputs\n    forc tx create --bytecode \"{name}/out/debug/name.bin\"\n        --storage-slots \"{path}/out/debug/name-storage_slots.json\"\n        --script-gas-limit 100 \\\n        --gas-price 0 \\\n        --maturity 0 \\\n        --witness ADFD \\\n        --witness DFDA \\\n        input coin \\\n            --utxo-id 0 \\\n            --output-ix 0 \\\n            --owner 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --witness-ix 0 \\\n            --maturity 0 \\\n        input contract \\\n            --utxo-id 1 \\\n            --output-ix 1 \\\n            --balance-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --state-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --contract-id 0xCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", 2213, &v1);
    v8 = v12;
    v9 = v13;
    v1 = &g_5d13c8;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    v14.map_or_else("    # An example constructing a create transaction\n    forc tx create \\\n        --bytecode {path}/out/debug/name.bin \\\n        --storage-slots {path}/out/debug/name-storage_slots.json \\\n        --script-gas-limit 100 \\\n        --gas-price 0 \\\n        --maturity 0 \\\n        --witness ADFD \\\n        --witness DFDA \\\n        input coin \\\n            --utxo-id 0 \\\n            --output-ix 0 \\\n            --owner 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --amount 100 \\\n            --asset-id 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --witness-ix 0 \\\n            --maturity 0 \\\n        input contract \\\n            --utxo-id 1 \\\n            --output-ix 1 \\\n            --balance-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --state-root 0x0000000000000000000000000000000000000000000000000000000000000000 \\\n            --tx-ptr 89ACBDEFBDEF \\\n            --contract-id 0x", 2715, &v1);
    memcpy(&v1, &v10, 16);
    v3 = v11;
    v4 = v8;
    v5 = v9;
    memcpy(&v6, &v14, 16);
    v7 = v15;
    alloc::str::join_generic_copy(&v16, &v1);
    v18 = v16.into_boxed_slice();
    core::ptr::drop_in_place<[alloc::string::String; 3]>(&v1);
    return v18;
}
