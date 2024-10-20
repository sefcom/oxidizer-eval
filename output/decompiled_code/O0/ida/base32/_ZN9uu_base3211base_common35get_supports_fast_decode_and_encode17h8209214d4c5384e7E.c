__int64 __fastcall uu_base32::base_common::get_supports_fast_decode_and_encode(char a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // [rsp+10h] [rbp-1B8h]
  __int128 v6; // [rsp+20h] [rbp-1A8h]
  __int128 v7; // [rsp+50h] [rbp-178h]
  __int128 v8; // [rsp+60h] [rbp-168h]
  __int128 v9; // [rsp+90h] [rbp-138h]
  __int128 v10; // [rsp+A0h] [rbp-128h]
  __int128 v11; // [rsp+D0h] [rbp-F8h]
  __int128 v12; // [rsp+E0h] [rbp-E8h]
  __int128 v13; // [rsp+110h] [rbp-B8h]
  __int128 v14; // [rsp+120h] [rbp-A8h]
  __int128 v15; // [rsp+150h] [rbp-78h]
  __int128 v16; // [rsp+160h] [rbp-68h]
  __int128 v17; // [rsp+190h] [rbp-38h]
  __int128 v18; // [rsp+1A0h] [rbp-28h]

  switch ( a1 )
  {
    case 0:
      *((_QWORD *)&v15 + 1) = aAbcdefghijklmn;
      *(_QWORD *)&v16 = 65LL;
      *(_QWORD *)&v15 = (char *)&dword_200 + 2;
      *((_QWORD *)&v16 + 1) = 3LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 4LL;
      v2 = unk_12C5D0;
      v3 = v15;
      v4 = v16;
      goto LABEL_17;
    case 1:
      *((_QWORD *)&v17 + 1) = aAbcdefghijklmn_0;
      *(_QWORD *)&v18 = 65LL;
      *(_QWORD *)&v17 = (char *)&dword_200 + 2;
      *((_QWORD *)&v18 + 1) = 3LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 4LL;
      v2 = unk_12C628;
      v3 = v17;
      v4 = v18;
      goto LABEL_17;
    case 2:
      *((_QWORD *)&v11 + 1) = aAbcdefghijklmn_1;
      *(_QWORD *)&v12 = 33LL;
      *(_QWORD *)&v11 = (char *)&dword_200 + 2;
      *((_QWORD *)&v12 + 1) = 5LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 8LL;
      v2 = unk_12C640;
      v3 = v11;
      v4 = v12;
      goto LABEL_17;
    case 3:
      *((_QWORD *)&v13 + 1) = a0123456789abcd_0;
      *(_QWORD *)&v14 = 33LL;
      *(_QWORD *)&v13 = (char *)&dword_200 + 2;
      *((_QWORD *)&v14 + 1) = 5LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 8LL;
      v2 = unk_12C658;
      v3 = v13;
      v4 = v14;
      goto LABEL_17;
    case 4:
      *((_QWORD *)&v5 + 1) = a0123456789abcd;
      *(_QWORD *)&v6 = 16LL;
      *(_QWORD *)&v5 = (char *)&dword_200 + 2;
      *((_QWORD *)&v6 + 1) = 1LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 2LL;
      v2 = unk_12C670;
      v3 = v5;
      v4 = v6;
      goto LABEL_17;
    case 5:
      *((_QWORD *)&v7 + 1) = a01;
      *(_QWORD *)&v8 = 2LL;
      *(_QWORD *)&v7 = (char *)&dword_200 + 2;
      *((_QWORD *)&v8 + 1) = 1LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 8LL;
      v2 = unk_12C688;
      v3 = v7;
      v4 = v8;
      goto LABEL_17;
    case 6:
      *((_QWORD *)&v9 + 1) = a01;
      *(_QWORD *)&v10 = 2LL;
      *(_QWORD *)&v9 = (char *)&dword_200 + 2;
      *((_QWORD *)&v10 + 1) = 1LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(result + 48) = 8LL;
      v2 = unk_12C6A0;
      v3 = v9;
      v4 = v10;
LABEL_17:
      *(_OWORD *)(result + 32) = v4;
      *(_OWORD *)(result + 16) = v3;
      *(_OWORD *)result = v2;
      break;
    case 7:
      result = 1LL;
      break;
  }
  return result;
}
