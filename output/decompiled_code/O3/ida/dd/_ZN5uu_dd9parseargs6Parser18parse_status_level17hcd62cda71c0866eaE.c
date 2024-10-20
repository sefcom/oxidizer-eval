void __fastcall uu_dd::parseargs::Parser::parse_status_level(__int64 a1, unsigned __int16 *a2, signed __int64 a3)
{
  char *v4; // r15
  __int64 v5; // r12
  __int64 v6; // rax

  switch ( a3 )
  {
    case 0LL:
      v4 = (char *)&dword_0 + 1;
      goto LABEL_13;
    case 4LL:
      if ( *(_DWORD *)a2 != 1701736302 )
        goto LABEL_11;
      *(_BYTE *)(a1 + 8) = 2;
      goto LABEL_9;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x66786F6E | a2[2] ^ 0x7265 )
        goto LABEL_11;
      *(_BYTE *)(a1 + 8) = 1;
      goto LABEL_9;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x73736572676F7270LL )
        goto LABEL_11;
      *(_BYTE *)(a1 + 8) = 0;
LABEL_9:
      *(_QWORD *)a1 = 14LL;
      return;
    default:
      if ( a3 < 0 )
      {
        v5 = 0LL;
LABEL_15:
        alloc::raw_vec::handle_error(v5, a3);
      }
LABEL_11:
      v5 = 1LL;
      v6 = _rust_alloc(a3, 1LL);
      if ( !v6 )
        goto LABEL_15;
      v4 = (char *)v6;
LABEL_13:
      memcpy(v4, a2, a3);
      *(_QWORD *)a1 = 10LL;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 24) = a3;
      return;
  }
}
