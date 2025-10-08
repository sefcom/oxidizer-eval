void _ZN21ruff_python_formatter6string9normalize13QuoteMetadata8from_str17h18c8ad1316633cd8E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
               undefined param_5)

{
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_4 < 0x40) {
    if ((param_4 & 2) == 0) {
      _ZN21ruff_python_formatter6string9normalize17QuoteMetadataKind7regular17hd93f71086a77b31bE
                (&local_1c);
    }
    else {
      _ZN21ruff_python_formatter6string9normalize17QuoteMetadataKind13triple_quoted17h5840b0a68ba9b6caE
                (&local_1c,param_2,param_3,param_5);
    }
  }
  else {
    _ZN21ruff_python_formatter6string9normalize17QuoteMetadataKind3raw17hb0a4e8c14ab76ee2E
              (&local_1c,param_2,param_3,param_5,(param_4 & 2) == 0);
  }
  *(undefined4 *)(param_1 + 1) = local_14;
  *param_1 = local_1c;
  *(byte *)((long)param_1 + 0xc) = param_4 & 1;
  return;
}