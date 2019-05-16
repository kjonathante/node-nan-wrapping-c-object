{
  "targets": [
    {
      "target_name": "hello",
      "sources": [ 
        "src/myobject.cc" 
      ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ],
}