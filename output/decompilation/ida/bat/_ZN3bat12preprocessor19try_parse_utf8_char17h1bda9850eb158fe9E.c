char *__fastcall bat::preprocessor::try_parse_utf8_char(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v5; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v6; // [rsp+10h] [rbp-88h] BYREF
  __int64 v7; // [rsp+18h] [rbp-80h]
  char *v8; // [rsp+20h] [rbp-78h]
  _QWORD v9[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[64]; // [rsp+58h] [rbp-40h] BYREF

  if ( a2 && (v2 = core::ops::function::FnOnce::call_once(a1, 1LL)) != 0 )
  {
    v9[0] = v2;
    v9[1] = v3;
    v9[2] = 1LL;
  }
  else
  {
    v9[0] = 0LL;
  }
  v6 = a1;
  v7 = a2;
  v8 = &v5;
  core::option::Option<T>::or_else(v11, v9, &v6);
  v6 = a1;
  v7 = a2;
  v8 = &v5;
  core::option::Option<T>::or_else(v9, v11, &v6);
  v6 = a1;
  v7 = a2;
  v8 = &v5;
  core::option::Option<T>::or_else(v10, v9, &v6);
  if ( v10[0] )
    return (char *)bat::preprocessor::try_parse_utf8_char::{{closure}}(v10);
  else
    return "   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)";
}