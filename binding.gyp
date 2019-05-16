{
  "targets": [
    {
      "target_name": "myobject",
      "sources": [ 
        "src/myobject.cc" 
      ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ],
}