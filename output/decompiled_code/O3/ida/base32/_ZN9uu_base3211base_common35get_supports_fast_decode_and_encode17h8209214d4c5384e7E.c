__int64 __fastcall uu_base32::base_common::get_supports_fast_decode_and_encode(char a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rdx

  switch ( a1 )
  {
    case 0:
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        goto LABEL_18;
      v2 = xmmword_11F20;
      v3 = 4LL;
      v4 = &unk_1E2C8;
      v5 = &unk_1E309;
      goto LABEL_17;
    case 1:
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        goto LABEL_18;
      v2 = xmmword_11F20;
      v3 = 4LL;
      v4 = &unk_1E50B;
      v5 = &unk_1E54C;
      goto LABEL_17;
    case 2:
      v3 = 8LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        goto LABEL_18;
      v2 = unk_120C0;
      v4 = &unk_1E74E;
      v5 = &unk_1E76F;
      goto LABEL_17;
    case 3:
      v3 = 8LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        goto LABEL_18;
      v2 = unk_120C0;
      v4 = &unk_1E971;
      v5 = &unk_1E992;
      goto LABEL_17;
    case 4:
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        goto LABEL_18;
      v2 = xmmword_12290;
      v3 = 2LL;
      v4 = &unk_11F40;
      v5 = &unk_1EB94;
      goto LABEL_17;
    case 5:
      v3 = 8LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
        goto LABEL_18;
      v2 = xmmword_11F60;
      v4 = &unk_1ED96;
      v5 = &unk_1ED98;
      goto LABEL_17;
    case 6:
      v3 = 8LL;
      result = _rust_alloc(56LL, 8LL);
      if ( !result )
LABEL_18:
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      v2 = xmmword_11F60;
      v4 = &unk_1ED96;
      v5 = &unk_1EF9A;
LABEL_17:
      *(_QWORD *)result = 0x8000000000000000LL;
      *(_QWORD *)(result + 8) = v5;
      *(_QWORD *)(result + 16) = 514LL;
      *(_QWORD *)(result + 24) = v4;
      *(_OWORD *)(result + 32) = v2;
      *(_QWORD *)(result + 48) = v3;
      break;
    case 7:
      result = 1LL;
      break;
  }
  return result;
}
