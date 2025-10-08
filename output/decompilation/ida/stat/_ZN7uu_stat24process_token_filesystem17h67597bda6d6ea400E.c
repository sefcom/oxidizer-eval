__int64 __fastcall uu_stat::process_token_filesystem(__int64 a1, __int64 (__fastcall **a2)(), __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // r12
  int *v20; // [rsp+0h] [rbp-78h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+8h] [rbp-70h]
  int v22; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v23[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)a1;
  v6 = 2LL;
  if ( (unsigned __int64)(*(_QWORD *)a1 - 3LL) < 2 )
    v6 = *(_QWORD *)a1 - 3LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      return uu_stat::write_raw_byte(*(unsigned int *)(a1 + 8));
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 28);
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)(a1 + 16);
      switch ( *(_DWORD *)(a1 + 24) )
      {
        case 'S':
          v21 = a2[1];
          v13 = 0x8000000000000000LL;
          goto LABEL_23;
        case 'T':
          v15 = *(_QWORD *)a1;
          v16 = *(_QWORD *)(a1 + 8);
          v17 = *(_QWORD *)(a1 + 16);
          uucore::features::fsext::pretty_fstype(v23, *a2, v12, v5, v11, a3);
          <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(&v20, v23);
          v12 = v17;
          v11 = v16;
          goto LABEL_20;
        case 'a':
          v14 = a2[4];
          goto LABEL_22;
        case 'b':
          v14 = a2[2];
          goto LABEL_22;
        case 'c':
          v14 = a2[5];
          goto LABEL_22;
        case 'd':
          v14 = a2[6];
          goto LABEL_22;
        case 'f':
          v14 = a2[3];
          goto LABEL_22;
        case 'i':
          v21 = (__int64 (__fastcall *)())(((unsigned __int64)*((unsigned int *)a2 + 14) << 32) | *((unsigned int *)a2
                                                                                                  + 15));
          goto LABEL_16;
        case 'l':
          v14 = a2[8];
          goto LABEL_22;
        case 'n':
          v18 = *(_QWORD *)(a1 + 16);
          v15 = *(_QWORD *)a1;
          v19 = *(_QWORD *)(a1 + 8);
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, a3, a4);
          v12 = v18;
          v11 = v19;
LABEL_20:
          v5 = v15;
          goto LABEL_24;
        case 's':
          v14 = a2[9];
LABEL_22:
          v21 = v14;
          v13 = 0x8000000000000001LL;
          goto LABEL_23;
        case 't':
          v21 = *a2;
LABEL_16:
          v13 = 0x8000000000000002LL;
          goto LABEL_23;
        default:
          v13 = 0x8000000000000005LL;
LABEL_23:
          v20 = (int *)v13;
LABEL_24:
          uu_stat::print_it((__int64)&v20, v10, v12, v5, v11);
          result = core::ptr::drop_in_place<uu_stat::OutputType>(&v20);
          break;
      }
    }
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 8);
    v20 = &v22;
    v21 = <char as core::fmt::Display>::fmt;
    v23[0] = &unk_1AB40;
    v23[1] = 1LL;
    v23[4] = 0LL;
    v23[2] = &v20;
    v23[3] = 1LL;
    return std::io::stdio::_print(v23);
  }
  return result;
}