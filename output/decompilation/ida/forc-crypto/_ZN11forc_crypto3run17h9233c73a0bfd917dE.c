__int64 forc_crypto::run()
{
  __int64 v0; // rcx
  char v1; // al
  int v3; // [rsp+Bh] [rbp-14Dh]
  _OWORD v4[3]; // [rsp+10h] [rbp-148h] BYREF
  _BYTE v5[48]; // [rsp+48h] [rbp-110h] BYREF
  __int128 v6; // [rsp+78h] [rbp-E0h]
  __int128 v7; // [rsp+88h] [rbp-D0h]
  __int128 v8; // [rsp+98h] [rbp-C0h]
  __int128 v9; // [rsp+A8h] [rbp-B0h]
  __int64 v10; // [rsp+B8h] [rbp-A0h]
  _OWORD v11[2]; // [rsp+C0h] [rbp-98h] BYREF
  _OWORD v12[7]; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+150h] [rbp-8h]

  clap_builder::derive::Parser::parse(v5);
  v0 = 6LL;
  if ( (unsigned __int64)(*(_QWORD *)v5 - 2LL) < 6 )
    v0 = *(_QWORD *)v5 - 2LL;
  switch ( v0 )
  {
    case 0LL:
      forc_crypto::keccak256::hash(v4, (__int64)&v5[8]);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) == 6 )
        return *((_QWORD *)&v4[0] + 1);
      goto LABEL_17;
    case 1LL:
      forc_crypto::sha256::hash(v4, (__int64)&v5[8]);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) != 6 )
        goto LABEL_17;
      return *((_QWORD *)&v4[0] + 1);
    case 2LL:
      forc_crypto::address::dump_address((__int64)v4, (__int64)&v5[8]);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) != 6 )
        goto LABEL_17;
      return *((_QWORD *)&v4[0] + 1);
    case 3LL:
      forc_crypto::keys::get_public_key::handler(v4, &v5[8]);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) != 6 )
        goto LABEL_17;
      return *((_QWORD *)&v4[0] + 1);
    case 4LL:
      forc_crypto::keys::new_key::handler(v4, v5[8]);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) != 6 )
        goto LABEL_17;
      return *((_QWORD *)&v4[0] + 1);
    case 5LL:
      v11[1] = *(_OWORD *)&v5[24];
      v11[0] = *(_OWORD *)&v5[8];
      forc_crypto::keys::parse_secret::handler(v4, v11);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) == 6 )
        return *((_QWORD *)&v4[0] + 1);
      goto LABEL_17;
    case 6LL:
      v13 = v10;
      v12[6] = v9;
      v12[5] = v8;
      v12[4] = v7;
      v12[3] = v6;
      v12[2] = *(_OWORD *)&v5[32];
      v12[1] = *(_OWORD *)&v5[16];
      v12[0] = *(_OWORD *)v5;
      forc_crypto::keys::vanity::handler(v4, v12);
      v1 = v4[0];
      if ( LOBYTE(v4[0]) == 6 )
        return *((_QWORD *)&v4[0] + 1);
LABEL_17:
      v3 = DWORD1(v4[0]);
      LOBYTE(v3) = BYTE4(v4[0]);
      v4[2] = v4[1];
      LOBYTE(v4[0]) = v1;
      DWORD1(v4[0]) = v3;
      return forc_crypto::display_output(v4);
  }
}