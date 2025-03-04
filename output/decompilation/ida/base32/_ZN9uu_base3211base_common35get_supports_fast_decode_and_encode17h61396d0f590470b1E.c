__int64 __fastcall uu_base32::base_common::get_supports_fast_decode_and_encode(char a1)
{
  const char *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // [rsp+0h] [rbp-58h] BYREF
  char *v8; // [rsp+10h] [rbp-48h]
  _BYTE v9[64]; // [rsp+18h] [rbp-40h] BYREF

  switch ( a1 )
  {
    case 0:
      v8 = (char *)&dword_200 + 2;
      v7 = unk_1497E8;
      v1 = (const char *)&unk_18C14;
      goto LABEL_9;
    case 1:
      v8 = (char *)&dword_200 + 2;
      v7 = unk_149840;
      v1 = aAbcdefghijklmn;
LABEL_9:
      v2 = 4LL;
      v3 = 3LL;
      v4 = 65LL;
      goto LABEL_13;
    case 2:
      v8 = (char *)&dword_200 + 2;
      v7 = unk_149858;
      v1 = (const char *)&unk_1909A;
      goto LABEL_6;
    case 3:
      v8 = (char *)&dword_200 + 2;
      v7 = unk_149870;
      v1 = a0123456789abcd_0;
LABEL_6:
      v2 = 8LL;
      v3 = 5LL;
      v4 = 33LL;
      goto LABEL_13;
    case 4:
      v8 = (char *)&dword_200 + 2;
      v7 = unk_149888;
      v1 = a0123456789abcd;
      v2 = 2LL;
      v3 = 1LL;
      v4 = 16LL;
      goto LABEL_13;
    case 5:
      v8 = (char *)&dword_200 + 2;
      v6 = unk_1498A0;
      goto LABEL_12;
    case 6:
      v8 = (char *)&dword_200 + 2;
      v6 = unk_1498B8;
LABEL_12:
      v7 = v6;
      v1 = a01;
      v2 = 8LL;
      v3 = 1LL;
      v4 = 2LL;
LABEL_13:
      uucore::features::encoding::EncodingWrapper::new(v9, &v7, v2, v3, v1, v4, v7, *((_QWORD *)&v7 + 1), v8);
      result = alloc::boxed::Box<T>::new(v9);
      break;
    case 7:
      result = alloc::boxed::Box<T>::new();
      break;
  }
  return result;
}
