__int64 forc_tx::main()
{
  __int64 v0; // rbx
  char v1; // bp
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-4E8h] BYREF
  __int128 v7; // [rsp+10h] [rbp-4D8h]
  __int128 v8; // [rsp+20h] [rbp-4C8h]
  _QWORD v9[2]; // [rsp+30h] [rbp-4B8h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-4A8h] BYREF
  _BYTE v11[56]; // [rsp+60h] [rbp-488h] BYREF
  _BYTE src[376]; // [rsp+98h] [rbp-450h] BYREF
  _BYTE v13[232]; // [rsp+218h] [rbp-2D0h] BYREF
  _QWORD v14[3]; // [rsp+300h] [rbp-1E8h] BYREF
  __int64 v15; // [rsp+318h] [rbp-1D0h] BYREF
  __int128 v16; // [rsp+320h] [rbp-1C8h]
  __int128 v17; // [rsp+330h] [rbp-1B8h]
  __int128 v18; // [rsp+340h] [rbp-1A8h]
  _BYTE dest[376]; // [rsp+350h] [rbp-198h] BYREF

  forc_tx::Command::parse(v13);
  forc_tx::<impl core::convert::TryFrom<forc_tx::Transaction> for fuel_tx::transaction::Transaction>::try_from(v11, v13);
  v6 = *(_OWORD *)&v11[8];
  v7 = *(_OWORD *)&v11[24];
  v8 = *(_OWORD *)&v11[40];
  if ( *(_QWORD *)v11 != 0x8000000000000006LL )
  {
    memcpy(dest, src, sizeof(dest));
    v16 = v6;
    v17 = v7;
    v18 = v8;
    v15 = *(_QWORD *)v11;
    v2 = v14[0];
    if ( v14[0] == 0x8000000000000000LL )
    {
      serde_json::ser::to_vec_pretty(v11, &v15);
      if ( *(_QWORD *)v11 == 0x8000000000000000LL )
      {
        v0 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*(_QWORD *)&v11[8]);
        v1 = 1;
LABEL_12:
        core::ptr::drop_in_place<fuel_tx::transaction::Transaction>(&v15);
        goto LABEL_13;
      }
      v6 = *(_OWORD *)v11;
      *(_QWORD *)&v7 = *(_QWORD *)&v11[16];
      v9[0] = &v6;
      v9[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v11 = &unk_1D05B0;
      *(_QWORD *)&v11[8] = 2LL;
      *(_QWORD *)&v11[16] = v9;
      *(_OWORD *)&v11[24] = 1uLL;
      std::io::stdio::_print(v11);
      core::ptr::drop_in_place<fuel_tx::transaction::types::input::message::Message<fuel_tx::transaction::types::input::message::specifications::MessageData<fuel_tx::transaction::types::input::message::specifications::Signed>>>(
        v6,
        *((_QWORD *)&v6 + 1));
LABEL_16:
      core::ptr::drop_in_place<fuel_tx::transaction::Transaction>(&v15);
      return 0LL;
    }
    std::fs::File::create(v11, v14);
    if ( *(_DWORD *)v11 == 1 )
    {
      v1 = 0;
      v3 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*(_QWORD *)&v11[8]);
    }
    else
    {
      std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v10, *(unsigned int *)&v11[4]);
      v4 = serde_json::ser::to_writer_pretty(v10, &v15);
      v1 = 0;
      if ( !v4 )
        goto LABEL_16;
      v3 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v4);
    }
    v0 = v3;
    goto LABEL_12;
  }
  *(_OWORD *)&v11[32] = v8;
  *(_OWORD *)&v11[16] = v7;
  *(_OWORD *)v11 = v6;
  v0 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v11);
  v1 = 1;
  v2 = v14[0];
LABEL_13:
  if ( v2 != 0x8000000000000000LL && v1 )
    core::ptr::drop_in_place<std::path::PathBuf>(v14);
  return v0;
}