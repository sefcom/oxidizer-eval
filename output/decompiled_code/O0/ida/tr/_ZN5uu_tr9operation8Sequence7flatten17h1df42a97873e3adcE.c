__int64 __fastcall uu_tr::operation::Sequence::flatten(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax
  char v3; // bl
  char v4; // bl
  __int64 v5; // r14
  __int16 v6; // bx
  __int64 v7; // rax

  switch ( *(_BYTE *)a1 )
  {
    case 0:
      v1 = *(_BYTE *)(a1 + 1);
      result = alloc::alloc::Global::alloc_impl(1LL, 1LL, 2LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(1LL, 2LL);
      *(_BYTE *)result = 1;
      *(_BYTE *)(result + 1) = v1;
      break;
    case 1:
      v6 = *(_WORD *)(a1 + 1);
      result = alloc::alloc::Global::alloc_impl(1LL, 1LL, 3LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(1LL, 3LL);
      *(_BYTE *)(result + 2) = HIBYTE(v6);
      *(_WORD *)result = v6 << 8;
      break;
    case 2:
      v3 = *(_BYTE *)(a1 + 1);
      result = alloc::alloc::Global::alloc_impl(1LL, 1LL, 1LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(1LL, 1LL);
      *(_BYTE *)result = v3;
      break;
    case 3:
      v4 = *(_BYTE *)(a1 + 1);
      v5 = *(_QWORD *)(a1 + 8);
      result = alloc::alloc::Global::alloc_impl(1LL, 8LL, 16LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 16LL);
      *(_QWORD *)result = v5;
      *(_BYTE *)(result + 8) = v4;
      break;
    case 4:
      switch ( *(_BYTE *)(a1 + 1) )
      {
        case 0:
          result = alloc::alloc::exchange_malloc(9LL, 1LL);
          *(_BYTE *)(result + 2) = 122;
          *(_WORD *)result = 24832;
          *(_DWORD *)(result + 3) = 3747840;
          *(_WORD *)(result + 7) = 23105;
          break;
        case 1:
          result = alloc::alloc::exchange_malloc(6LL, 1LL);
          *(_WORD *)(result + 4) = 31329;
          *(_DWORD *)result = 5914880;
          break;
        case 2:
          *(_QWORD *)alloc::alloc::exchange_malloc(16LL, 8LL) = &anon_de0afba102438efbad5a2750be1fb738_21_llvm_1527013734017536117;
          JUMPOUT(0x9BF8BLL);
        case 3:
          result = alloc::alloc::exchange_malloc(5LL, 1LL);
          *(_BYTE *)(result + 4) = 127;
          *(_DWORD *)result = 18808832;
          break;
        case 4:
          result = alloc::alloc::exchange_malloc(3LL, 1LL);
          *(_BYTE *)(result + 2) = 57;
          *(_WORD *)result = 12288;
          break;
        case 5:
          result = alloc::alloc::exchange_malloc(23LL, 1LL);
          *(_DWORD *)result = 2063605761;
          *(_BYTE *)(result + 4) = 126;
          *(_BYTE *)(result + 7) = 96;
          *(_WORD *)(result + 5) = 23296;
          *(_BYTE *)(result + 10) = 64;
          *(_WORD *)(result + 8) = 14848;
          *(_BYTE *)(result + 13) = 47;
          *(_WORD *)(result + 11) = 8448;
          *(_BYTE *)(result + 16) = 122;
          *(_WORD *)(result + 14) = 24832;
          *(_DWORD *)(result + 17) = 3747840;
          *(_WORD *)(result + 21) = 23105;
          break;
        case 6:
          result = alloc::alloc::exchange_malloc(3LL, 1LL);
          *(_BYTE *)(result + 2) = 122;
          *(_WORD *)result = 24832;
          break;
        case 7:
          v7 = alloc::alloc::exchange_malloc(21LL, 1LL);
          *(_BYTE *)(v7 + 2) = 126;
          *(_WORD *)v7 = 31488;
          *(_BYTE *)(v7 + 5) = 96;
          *(_WORD *)(v7 + 3) = 23296;
          *(_BYTE *)(v7 + 8) = 64;
          *(_WORD *)(v7 + 6) = 14848;
          *(_BYTE *)(v7 + 11) = 47;
          *(_WORD *)(v7 + 9) = 8448;
          *(_BYTE *)(v7 + 14) = 122;
          *(_WORD *)(v7 + 12) = 24832;
          JUMPOUT(0x9C011LL);
        case 8:
          result = alloc::alloc::exchange_malloc(12LL, 1LL);
          *(_BYTE *)(result + 2) = 126;
          *(_WORD *)result = 31488;
          *(_BYTE *)(result + 5) = 96;
          *(_WORD *)(result + 3) = 23296;
          *(_WORD *)(result + 10) = 16442;
          *(_DWORD *)(result + 6) = 3088640;
          break;
        case 9:
          JUMPOUT(0x9BF5ALL);
        case 0xA:
          result = alloc::alloc::exchange_malloc(3LL, 1LL);
          *(_BYTE *)(result + 2) = 90;
          *(_WORD *)result = 16640;
          break;
        case 0xB:
          result = alloc::alloc::exchange_malloc(9LL, 1LL);
          *(_BYTE *)(result + 2) = 102;
          *(_WORD *)result = 24832;
          *(_WORD *)(result + 7) = 17985;
          *(_DWORD *)(result + 3) = 3747840;
          break;
      }
      break;
  }
  return result;
}
