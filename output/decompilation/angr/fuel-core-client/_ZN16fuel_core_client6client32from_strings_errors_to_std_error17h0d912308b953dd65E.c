long long fuel_core_client::client::from_strings_errors_to_std_error(unsigned long long a0)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x68]
    char v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x20]

    v4.into_iter(a0);
    v2.to_vec("Response errors; subIdcontractIdstateRootutxoIdtransactionIdutxoValidationblockHeightreceiptTypetoAddressgasUsedstruct Receipttransactionstruct TransactionQuerytxPointerbalanceRootCoinOutputContractOutputChangeOutputVariableOutputContractCreatedinputIndexs", 15);
    v1 = v3;
    memcpy(&v0, &v2, 16);
    v5.fold(&v4, &v0);
    return 40.new(&v5);
}
