__int64 __fastcall fuel_core_e2e_client::tests::script::load_contract(char *dest, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  char *v7; // rdi
  __int64 result; // rax
  _BYTE v9[160]; // [rsp+0h] [rbp-278h] BYREF
  _BYTE v10[32]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v11; // [rsp+C0h] [rbp-1B8h]
  _QWORD desta[18]; // [rsp+D0h] [rbp-1A8h] BYREF
  _QWORD v13[18]; // [rsp+160h] [rbp-118h] BYREF
  __int128 v14; // [rsp+1F0h] [rbp-88h]
  __int128 v15; // [rsp+200h] [rbp-78h]
  __int128 v16; // [rsp+210h] [rbp-68h]
  __int128 v17; // [rsp+220h] [rbp-58h]
  __int128 v18; // [rsp+230h] [rbp-48h]
  __int128 v19; // [rsp+240h] [rbp-38h]

  fuel_core_chain_config::config::snapshot_metadata::SnapshotMetadata::read(v9);
  v5 = *(_QWORD *)&v9[8];
  v6 = -*(_QWORD *)v9;
  if ( __OFSUB__(-*(_QWORD *)v9, 1LL) )
  {
    v7 = dest + 8;
LABEL_5:
    result = <libtest_mimic::Failed as core::convert::From<M>>::from(v7, v5, v4, v6);
    *(_QWORD *)dest = 0x8000000000000000LL;
    return result;
  }
  v19 = *(_OWORD *)&v9[80];
  v18 = *(_OWORD *)&v9[64];
  v17 = *(_OWORD *)&v9[48];
  v16 = *(_OWORD *)&v9[32];
  v15 = *(_OWORD *)&v9[16];
  v14 = *(_OWORD *)v9;
  fuel_core_chain_config::config::state::StateConfig::from_snapshot_metadata(v9);
  if ( *(_QWORD *)v9 == 2LL )
  {
    v7 = dest + 8;
    v5 = *(_QWORD *)&v9[8];
    goto LABEL_5;
  }
  memcpy(desta, &v9[16], sizeof(desta));
  v11 = *(_OWORD *)v9;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v10, &desta[15]);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v9, v10);
  if ( *(_QWORD *)v9 == 0x8000000000000000LL )
  {
    <libtest_mimic::Failed as core::convert::From<M>>::from(v9, aNoContractFoun, 30LL);
    *((_QWORD *)dest + 3) = *(_QWORD *)&v9[16];
    *(_OWORD *)(dest + 8) = *(_OWORD *)v9;
    *(_QWORD *)dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fuel_core_chain_config::config::contract::ContractConfig>>(v10);
  }
  else
  {
    *(_OWORD *)&v13[3] = *(_OWORD *)&v9[24];
    *(_OWORD *)&v13[5] = *(_OWORD *)&v9[40];
    *(_OWORD *)&v13[7] = *(_OWORD *)&v9[56];
    *(_OWORD *)&v13[9] = *(_OWORD *)&v9[72];
    *(_OWORD *)&v13[11] = *(_OWORD *)&v9[88];
    *(_OWORD *)&v13[13] = *(_OWORD *)&v9[104];
    *(_OWORD *)&v13[15] = *(_OWORD *)&v9[120];
    v13[17] = *(_QWORD *)&v9[136];
    v13[0] = *(_QWORD *)v9;
    *(_OWORD *)&v13[1] = *(_OWORD *)&v9[8];
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fuel_core_chain_config::config::contract::ContractConfig>>(v10);
    fuel_core_chain_config::config::contract::ContractConfig::update_contract_id(v13, a2);
    memcpy(dest, v13, 0x90uLL);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<fuel_core_client::client::types::ResolvedOutput>>(desta[6], desta[7]);
  core::ptr::drop_in_place<alloc::vec::Vec<fuel_core_chain_config::config::message::MessageConfig>>(&desta[9]);
  return core::ptr::drop_in_place<alloc::vec::Vec<fuel_core_chain_config::config::contract::ContractStateConfig>>(&desta[12]);
}