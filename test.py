from pprint import pprint
import json

from eval.type_recovery.dwarf_parser import extract_function_prototypes
from eval.type_recovery.function_prototype import FunctionPrototype

pprint(
    FunctionPrototype.from_dict(json.loads(json.dumps(list(extract_function_prototypes("fmt").values())[0].to_dict())))
)
