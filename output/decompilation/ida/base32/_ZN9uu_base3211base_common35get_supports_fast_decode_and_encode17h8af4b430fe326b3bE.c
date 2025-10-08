__int64 __fastcall uu_base32::base_common::get_supports_fast_decode_and_encode(
        char a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  const char *v3; // r8
  __int64 v4; // r9
  __int128 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // [rsp+0h] [rbp-78h] BYREF
  char *v11; // [rsp+10h] [rbp-68h]
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  char *v13; // [rsp+30h] [rbp-48h]
  _BYTE v14[64]; // [rsp+38h] [rbp-40h] BYREF

  switch ( a1 )
  {
    case 0:
      if ( a3 | a2 ^ 1 )
      {
        v3 = aAbcdefghijklmn;
        if ( a3 )
          v3 = (const char *)&unk_1B390;
        v4 = a3 | 0x40LL;
        v13 = (char *)&dword_200 + 2;
        v12 = unk_10E048;
      }
      else
      {
        v13 = (char *)&dword_200 + 2;
        v12 = unk_10E030;
        v3 = aAbcdefghijklmn;
        v4 = 64LL;
      }
      v5 = &v12;
      v6 = 4LL;
      v7 = 3LL;
      goto LABEL_17;
    case 1:
      v11 = (char *)&dword_200 + 2;
      v10 = unk_10E0A0;
      v3 = aAbcdefghijklmn_0;
      v5 = &v10;
      v6 = 4LL;
      v7 = 3LL;
      v4 = 65LL;
      goto LABEL_17;
    case 2:
      v11 = (char *)&dword_200 + 2;
      v10 = unk_10E0B8;
      v3 = (const char *)&unk_1BA58;
      goto LABEL_9;
    case 3:
      v11 = (char *)&dword_200 + 2;
      v10 = unk_10E0D0;
      v3 = a0123456789abcd_0;
LABEL_9:
      v5 = &v10;
      v6 = 8LL;
      v7 = 5LL;
      v4 = 33LL;
      goto LABEL_17;
    case 4:
      v11 = (char *)&dword_200 + 2;
      v10 = unk_10E0E8;
      v3 = a0123456789abcd_1;
      v5 = &v10;
      v6 = 2LL;
      v7 = 1LL;
      v4 = 22LL;
      goto LABEL_17;
    case 5:
      v11 = (char *)&dword_200 + 2;
      v9 = unk_10E100;
      goto LABEL_14;
    case 6:
      v11 = (char *)&dword_200 + 2;
      v9 = unk_10E118;
LABEL_14:
      v10 = v9;
      v3 = a01;
      v5 = &v10;
      v6 = 8LL;
      v7 = 1LL;
      v4 = 2LL;
LABEL_17:
      uucore::features::encoding::EncodingWrapper::new(v14, v5, v6, v7, v3, v4, v10, *((_QWORD *)&v10 + 1), v11);
      result = alloc::boxed::Box<T>::new(v14);
      break;
    case 7:
      result = alloc::boxed::Box<T>::new();
      break;
  }
  return result;
}