

Reveal.initialize({
    controls: true,
    progress: true,
    history: true,
    center: true,
    transition: 'slide',
    dependencies: [
        { src: 'notes.js', async: true },
        {
            src: "js/highlight.min.js",
            async: true,
            callback: function() { hljs.initHighlightingOnLoad(); }
        }
    ]
});